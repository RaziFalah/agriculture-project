#include <WiFi.h>
#include <HTTPClient.h>
#include <ArduinoJson.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

//LCD Object (0x3F or 0x27)
LiquidCrystal_I2C lcd(0x3F, 16, 2);

//Put your WiFi Credentials here
const char* ssid = "Wokwi-GUEST";
const char* password = "";

//URL Endpoint for the API
String URL = "http://api.openweathermap.org/data/2.5/weather?";
String ApiKey = "token";

// Replace with your location Credentials
String lat = "32.7776";
String lon = "35.3057";

void setup() {
  Serial.begin(115200);

  // Setup LCD with backlight and initialize
  lcd.init();
  lcd.backlight();
  lcd.clear();

  // We start by connecting to a WiFi network
  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println("");
  Serial.println("WiFi connected.");
  Serial.println("IP address: ");
  Serial.println(WiFi.localIP());
}

void loop() {
  // wait for WiFi connection
  if (WiFi.status() == WL_CONNECTED) {

    HTTPClient http;

    //Set HTTP Request Final URL with Location and API key information
    //http.begin(URL + "lat=" + lat + "&lon=" + lon + "&units=metric&appid=" + ApiKey);
//for testing
    http.begin("https://testweaapi.refunction.repl.co/data.json");
    // start connection and send HTTP Request
    int httpCode = http.GET();

    // httpCode will be negative on error
    if (httpCode > 0) {

      //Read Data as a JSON string
      String JSON_Data = http.getString();
      //Uncomment  to display the Current Weather Info in json
      //Serial.println(JSON_Data);

      //Retrieve some information about the weather from the JSON format
      DynamicJsonDocument doc(2048);
      deserializeJson(doc, JSON_Data);
      JsonObject obj = doc.as<JsonObject>();

      
      const char* description = obj["weather"][0]["description"].as<const char*>();
      const float temp = obj["main"]["temp"].as<float>();
      const float humidity = obj["main"]["humidity"].as<float>();
      Serial.println("====================");
      Serial.println(description);
      Serial.print(temp);
      Serial.print(" C, ");
      Serial.println(" ");
      Serial.print(humidity);
      Serial.print("%");
      Serial.println(" ");
      Serial.println("====================");
      if(temp > 30){
        //If moist sensor returned "WET" and the temp is high supply water anyway
        Serial.println("High temperature detected, Supplying extra water.");
        //Related function goes here
      } else {
        if(description == "clear sky"){
          Serial.println("Supplying water as routine.");
        } else {
          Serial.println("Supplying water was skipped.");
        }
        
        //Related function goes here
      }
      Serial.println("====================");
      if(humidity >= 40.00 && humidity <= 60){
        Serial.println("Humidity is ideal");
      } else if (humidity <= 100 && humidity > 60) {
        Serial.println("Humidity is high, fans have been turned on.");
        //Turn on fans
      } else if (humidity >= 20 && humidity > 40) {
        Serial.println("Humidity level is low, consider spraying water in the air.");
      } else {
        Serial.println("Humidity level is unrecognizable");
      }
      Serial.println("====================");
      if(temp >= 20 && temp <=30){
        Serial.println("Temperature is acceptable.");
      } else if (temp >= 0 && temp <=20){
        Serial.println("Temperature is low, lights are now on.");
      } else if (temp >= 30 && temp <=100) {
        Serial.println("Temperature is high, fans have been turned on.");
      } else {
        Serial.println("Temperature is below 0, lights are now on. Please consider other means of warming");

      }
      Serial.println("====================");

    } else {
      Serial.println("Error!");
      lcd.clear();
      lcd.print("Can't Get DATA!");
    }

    http.end();

  }
  
  //Wait for 30 seconds
  delay(10000);
}
