Simulation provided by wokwi.com<br>
Project conducted by <a href="https://github.com/razifalah">Razi Falah</a>

## Introduction
* [About](#about)
* [Code](#code)
* [Simulation](#simulation)

<h1>About</h1>
Using the esp32, the lcd screen will display a color and the rgb led will emit the exact color.
This proccess will include the rgb colors.


<h1>Code</h1>

```cpp
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C display(0x27, 16, 2);

void setup()
{
  display.init();
  display.backlight();
  pinMode(OUTPUT, 15); //red
  pinMode(OUTPUT, 4); //blue
  pinMode(OUTPUT, 25); //green
}

void loop()
{
  display.clear();
  analogWrite(15, 0);
  display.print("Red");
  delay(1000);
  display.clear();
  analogWrite(15, LOW);
  analogWrite(4, 151);
  display.print("blue");
  delay(1000);
  display.clear();
  analogWrite(5, LOW);
  analogWrite(25, 157);
  display.print("green");
  delay(1000);
  analogWrite(25, LOW);
  display.clear();
}

```

<h1>Simulation</h1>
Simulation provided by wokwi.com<br><a href="https://wokwi.com/projects/377398916859058177">Click here to go to simulation page.</a>
