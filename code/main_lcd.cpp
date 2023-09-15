// Learn about the ESP32 WiFi simulation in
// https://docs.wokwi.com/guides/esp32-wifi
#include <WiFi.h>
#include <HTTPClient.h>
#include <ArduinoJson.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C LCD = LiquidCrystal_I2C(0x27, 19, 3);



String URL = "http://api.openweathermap.org/data/2.5/weather?";
String ApiKey = "e4601654a66d2e3f42d1f1783b5f5a09";

// Replace with your location Credentials
String lat = "32.7776";
String lon = "35.3057";


#define NTP_SERVER     "pool.ntp.org"
#define UTC_OFFSET     0
#define UTC_OFFSET_DST 0

void spinner() {
  static int8_t counter = 0;
  const char* glyphs = "\xa1\xa5\xdb";
  LCD.setCursor(15, 1);
  LCD.print(glyphs[counter++]);
  if (counter == strlen(glyphs)) {
    counter = 0;
  }
}

void printLocalTime() {
  struct tm timeinfo;
  if (!getLocalTime(&timeinfo)) {
    LCD.setCursor(0, 1);
    LCD.println("Connection Err");
    return;
  }

  LCD.setCursor(8, 0);
  LCD.println(&timeinfo, "%H:%M:%S");

  LCD.setCursor(0, 1);
  LCD.println(&timeinfo, "%d/%m/%Y   %Z");
}

void setup() {
  Serial.begin(115200);
  Serial.begin(115200);
  LCD.init();
  LCD.backlight();
  LCD.setCursor(0, 0);
  LCD.print("Connecting to ");
  LCD.setCursor(0, 1);
  LCD.print("WiFi ");
  LCD.setCursor(0, 3);
  LCD.print("By razifalah.com");


  WiFi.begin("Wokwi-GUEST", "", 6);
  while (WiFi.status() != WL_CONNECTED) {
    delay(250);
    spinner();
  }
  Serial.println("");
  Serial.println("WiFi connected");
  Serial.print("IP address: ");
  Serial.println(WiFi.localIP());

  LCD.clear();
  LCD.setCursor(0, 0);
  LCD.println("Online");
  LCD.setCursor(0, 1);
  LCD.println("Connecting...");
}

void loop() {
  

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
      LCD.clear();
      Serial.println("====================");
      Serial.println(description);
      Serial.print(temp);
      Serial.print(" C, ");
      Serial.println(" ");
      Serial.print(humidity);
      Serial.print("%");
      Serial.println(" ");
      if(temp == 0 && humidity == 0){
        Serial.println("Data is invalid. API might be down");
      } else {
        Serial.println("====================");
        if(temp > 30){
          LCD.setCursor(0, 1);
          LCD.print("Watered [YES] +");
          //If moist sensor returned "WET" and the temp is high supply water anyway
          Serial.println("High temperature detected, Supplying extra water.");
          //Related function goes here
        } else {
          if(description == "clear sky"){
            Serial.println("Supplying water as routine.");
            LCD.setCursor(0, 1);
            LCD.print("Watered [YES]");
          } else {
            Serial.println("Supplying water was skipped.");
            LCD.setCursor(0, 1);
            LCD.println("Watered [NO]");
          }
          
          //Related function goes here
        }
        LCD.setCursor(13, 0);
        LCD.print(humidity);
        LCD.print("%");
        LCD.setCursor(1, 0);
        LCD.print(temp);
        LCD.print("c");
        Serial.println("====================");
        if(humidity >= 40.00 && humidity <= 60){
          Serial.println("Humidity is ideal");
          LCD.setCursor(0, 2);
          LCD.println("Humidity [OK]");
        } else if (humidity <= 100 && humidity > 60) {
          Serial.println("Humidity is high, fans have been turned on.");
          LCD.setCursor(0, 2);
          LCD.print("Humidity [HIGH]");

          //Turn on fans
        } else if (humidity >= 20 && humidity < 40) {
          Serial.println("Humidity level is low, consider spraying water in the air.");
          LCD.setCursor(0, 2);
          LCD.print("Humidity [LOW]");
        } else {
          Serial.println("Humidity level is unrecognizable");
          LCD.setCursor(0, 2);
          LCD.print("Humidity [?]");
        }
        Serial.println("====================");
        if(temp >= 20 && temp <=30){
          Serial.println("Temperature is acceptable.");
          LCD.setCursor(0, 3);
          LCD.print("Temperature [OK].");
        } else if (temp >= 0 && temp <=20){
          Serial.println("Temperature is low, lights are now on.");
          LCD.setCursor(0, 3);
          LCD.print("Temperature [LOW]");
        } else if (temp >= 30 && temp <=100) {
          Serial.print("Temperature is high, fans have been turned on.");
          LCD.setCursor(0, 3);
          LCD.print("Temperature [HIGH]");
        } else {
          Serial.println("Temperature is below 0, lights are now on. Please consider other means of warming");
          LCD.setCursor(0, 3);
          LCD.print("Temperature [NEG]");

        }
        Serial.println("====================");
        }

    } else {
      Serial.println("Error!");
    }

    http.end();
    
  }
  //Wait for 30 seconds
  delay(30000);

}
