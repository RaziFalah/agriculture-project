# PWM For RGB led.





RGB project using PWM 

- Power RGB led using the PWM 

## Features

- Fading animation of the led's colors instead of the classical boring cut of.

> Images of the esp32 and arduino nano board connect to a wire using PWM technique.


![Build Status](https://i.ibb.co/MM4FnPf/image.png)
![Build Status](https://i.ibb.co/mv3Vg6s/image.png)

The black wire connected to the longest pin (COM or Common) is the cathode pin which is the negative terminal or electrode through which electrons enter a direct current load. In this specific instrument the negative pin is connected to the ground (GND) pin of the arduino nano board or esp32.

The RED, GREEN, BLUE wire is connected to the esp32 3v(max) pins (19,18,5) or the arduino nano board the pin (6, 5, 3).

## Code

ESP32 Code

```cpp
void setup() {
   pinMode(19, OUTPUT);
  pinMode(18, OUTPUT);
  pinMode(5, OUTPUT);
} 

void loop() {
   analogWrite(19,255);
   analogWrite(18,215);
   analogWrite(5,0);
   delay(500);
   analogWrite(19,0);
   analogWrite(18,139);
   analogWrite(5,139);
   delay(500);
   analogWrite(19,128);
   analogWrite(18,0);
   analogWrite(5,128);
   delay(500);
}
```

Arduino nano Code

```cpp
void setup() {
   pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
} 

void loop() {
    analogWrite(3,255);
   analogWrite(5,215);
   analogWrite(6,0);
   delay(500);
   analogWrite(3,0);
   analogWrite(5,139);
   analogWrite(6,139);
   delay(500);
   analogWrite(3,128);
   analogWrite(5,0);
   analogWrite(6,128);
   delay(500);
}

```


<a href="https://wokwi.com/projects/376644677706964993">Simulation can be found here</a>
