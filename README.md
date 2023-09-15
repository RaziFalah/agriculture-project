Project by <a href="https://razifalah.com" target="_blank">Razi Falah</a>.<br>
Micro-controller board: ESP32.<br>
APIs: openweather.<br>

## Table of contents
* [Introduction](#introduction)
* [Features](#features)
* [Components](#components)
* [Functions](#functions)


<h1>Introduction</h1>
<p>This agriculture project is powered by arduino ESP32 micro-controller, this projects aims towards building a smart agriculture house containing a handful amount of sensors in order to achieve a smarter way of monitoring plants. it's equipped with state-of-the-art security measurements and immediate alarms and protective actions.</p>
<br>  

***The following image contains a prototype describing how the system works.***

<br>
<center><image src="digrams/prototype.png"></image></center>
<h1>Features</h1>
<h4>Water supplying:</h4>
In this feature there will be a connected water supply tube to every plant in the system, the water will be supplied depending on Whether the ground is dry or not.<br>There will be a wiether check using an API  when the day is rainy the water supplying will be skipped.
<h4>Humidity monitoring</h4>
The system will counduct humidity check only if the Humidity level is unacceptable there will be a warning to the web interface and also a sonic warning. (Humidity checks will be virtual and powered by OpenWeather API).
<h4>Temperature monitoring</h4>
The system will conduct a temperature check if the temperature is unacceptable there will be a warning pop up on the web interface and also a sonic warning. (Temperature checks will be virtual and powered by OpenWeather API).
<h4>Fire and gas alarm</h4>
If a fire or a gas leak was detected by the system the system will automatically signal a sonic alarm and also a popup on the web interface and overwork the water supplying
<h4>Web interface</h4>
Responsible for handiling pop-up alarms.
<h4>LCD display system</h4>
Responsible for handiling alarms and weather data.
<h4>Artificial lighting system</h4>
Responsible for providing plants with lights if needed, determined using a photoresistor or time table. <br>
<br><hr>

***Exampe of the code running in the ESP32 according to the API data***

<image src="digrams/esp32_prototype.png">

<h1>Components</h1>
<h4>Needed components</h4>

<ul>
  <li>ESP32 Board</li>
  <li>Moisture sensor</li>
  <li>Moisture sensor</li>
  <li>Photoresistor</li>
  <li>Gas sensor</li>
  <li>Sonic alarm</li>
  <li>Water supplier motor</li>
  <li>Light supplier</li>
</ul>



<h1>Functions</h1>
<h4>API Connection</h4>
<p>ESP32-WIFI connection code with openweather API using http request</p>
<a href="code/main.cpp">View API http call code & init wifi at the main file here.</a><br>
<a href="tests/API_testing.md">View API http call sandbox test here (Not a real API).</a>

***Exampe of the code running in the ESP32 according to the API data with LCD display***<br>
<image src="digrams/esp32_lcd.png"><br>
<a href="code/main_lcd.cpp">View LCD display containing weather and alarm data code here.</a><br>
**No need for testing, device is operating successfuly and same as the pervious test**
<br><image src="digrams/lcd_prototype.gif.gif"><br>
