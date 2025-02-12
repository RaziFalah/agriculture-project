<h1>This project was given the perfect score!!!!!! </h1>


![image](https://github.com/user-attachments/assets/1308d59a-d4bd-4bad-bb17-420d887f187e)
![image](https://github.com/user-attachments/assets/d2208ec0-e42b-46f1-b4a8-5a87b6b2614f)





<h1>Credits and project's information</h1>Project by <a href="https://razifalah.com" target="_blank">Razi Falah</a>.<br>
Micro-controller board: ESP32.<br>
APIs: openweather.<br>
This project is currently in development by Razi Falah and not yet finished.<br>
This project is written in english for better research and will be translated to Arabic or Hebrew <br> as requested by the ministry of education.<br>
<a href="https://wokwi.com/projects/376210317579552769">ESP32 simulation can be found if clicked here.</a><br>
Finishing deadline: First of June 2024
<center><image src="image log/SAM_0403.JPG"></image></center>

<hr>

## Table of contents
* [Introduction](#introduction)
* [Features](#features)
* [Components](#components)
* [Functions](#functions)



<a href="https://github.com/RaziFalah/agriculture-project/blob/main/esp32_status.md">view ESP32 status</a><br>
<a href="https://github.com/RaziFalah/agriculture-project/blob/main/notes.md">View notes table.</a><br>
<a href="https://github.com/RaziFalah/agriculture-project/blob/main/information/README.md">View blueprints</a><br>



<h1>Introduction</h1>
<h3>For a proper introduction, please view the following pdf file:</h3>(CLICK AT THE PDF LOGO) <a href="https://github.com/RaziFalah/agriculture-project/blob/main/docs/English_intro.pdf"><image src="https://raw.githubusercontent.com/toondaey/nestjs-pdf/master/pdf-icon.svg" border="0" width="200" height="40"></a>
<br>  

***The following 3D gif contains a prototype describing the structure of the agricultural house.***

<br>
<center><image src="digrams/protogif.gif"></image></center>
<a href="https://www.tinkercad.com/things/bjxyPMTghpm?sharecode=-sOVYjYutNeJOz8-vHF4RAPE3Cq87EVQZT0kTKe_JxA">Click here to view in 3D live simulation.</a><br>
<a href="3Dcomponents">Click here to view components in more details.</a><br>
<a href="digrams/prototype.png">Click here to view 2D digram</a>

***Real time documentation: (Not the final version).***
<center><image src="image log/SAM_0393.JPG"></image></center>
<center><image src="image log/SAM_0397.JPG"></image></center>
<center><image src="image log/SAM_0398.JPG"></image></center>
<center><image src="image log/SAM_0399.JPG"></image></center>


<br><br>





<h1>Features</h1>
<h4>Water supplying:</h4>
In this feature there will be a connected water supply tube to every plant in the system, the water will be supplied depending on Whether the ground is dry or not.<br>There will be a weather check using an API  when the day is rainy the water supplying will be skipped.
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
<h4>automatic ceiling</h4>
This ceiling will auto-close or auto-open depends on the data provided by the sensors and the api.
<h4>Indoor camera</h4>
This camera will be placed inside of the house, and will provide us with video stream and image data of the situation inside. The following image is an estimation of the camera viewport.<br><br><image src="digrams/estcam.png">
<br><br><a href="https://github.com/RaziFalah/agriculture-project/blob/main/3Dcomponents/README.md">For more information about the features, please visit the 3D documentation about the mechanics and components of this project</a><hr>

***Exampe of the code running in the ESP32 based on the API data***

<image src="digrams/esp32_prototype.png">

<h1>Components</h1>
<h4>Needed components</h4>
<p>Most components was already provided at my expense</p><br><a href="https://github.com/RaziFalah/agriculture-project/blob/main/3Dcomponents/README.md">For more information about the components, please visit the 3D documentation about the mechanics and components of this project</a>
<ul>
  <li>ESP32 Board</li> <a href="https://www.aliexpress.com/item/1005004879572949.html?spm=a2g0o.order_list.order_list_main.9.5c471802ypflOP">View on aliexpress</a>
  <li>Power supply</li> <a>Not yet decided.</a>
  <li>Moisture sensor</li> <a href="https://www.aliexpress.com/item/1005004961237192.html?spm=a2g0o.order_list.order_list_main.4.5c471802ypflOP">View on aliexpress</a>
  <li>Photoresistor</li> <a href="https://www.aliexpress.com/item/1005005009839541.html?spm=a2g0o.order_list.order_list_main.29.5c471802ypflOP">View on aliexpress</a>
  <li>Gas sensor</li> <a href="https://www.aliexpress.com/item/1005001666186214.html?spm=a2g0o.order_list.order_list_main.24.5c471802ypflOP">View on aliexpress</a>
  <li>Sonic alarm</li> <a href="https://www.aliexpress.com/item/1005003274011049.html?spm=a2g0o.order_list.order_list_main.34.5c471802ypflOP">View on aliexpress</a>
  <li>Water supplier motor (Water pump) </li> <a href="https://www.digikey.co.il/he/products/detail/adafruit-industries-llc/4547/11627730?utm_adgroup=&utm_source=google&utm_medium=cpc&utm_campaign=PMax_Product_High%20Volume%20Products&utm_term=&productid=11627730&gclid=EAIaIQobChMIpsvF8YXIgQMVfJqDBx09aAxGEAQYASABEgJ-jfD_BwE">View on digikey</a>
  <li>Light supplier (LED orange)</li> <a href="https://www.aliexpress.com/item/1005003323707856.html?spm=a2g0o.order_list.order_list_main.50.5c471802ypflOP">View on aliexpress</a>
  <li>Alarm ligh (LED Red)</li> <a href="https://www.aliexpress.com/item/1005003323707856.html?spm=a2g0o.order_list.order_list_main.49.5c471802ypflOP">View on aliexpress</a>
  <li>5mm fans</li> <a href="https://www.aliexpress.com/item/1005003878734109.html?spm=a2g0o.order_list.order_list_main.44.5c471802ypflOP">View on aliexpress</a>
  <li>4*20 LCD Display</li> <a href="https://www.aliexpress.com/item/4000863723154.html?spm=a2g0o.order_list.order_list_main.39.5c471802ypflOP">View on aliexpress</a>
  <li>stepper motor</li><a>Not yet decided</a>
  <li>ESP32-Cam</li><a href="https://www.aliexpress.com/item/1005004518669324.html?spm=a2g0o.order_list.order_list_main.4.2bbd7385CfUkpV#nav-review">View on aliexpress</a>
  <li>IC2 to LCD adapter</li> Built-in
</ul>



<h1>Functions</h1>
<h4>API Connection</h4>
<p>ESP32-WIFI connection code with openweather API using http request</p>
<a href="code/main.cpp">View API http call code & init wifi at the main file here.</a><br>
<a href="tests/API_testing.md">View API http call sandbox test here (Not a real API).</a>
<hr>

***Exampe of the code running in the ESP32 according to the API data with LCD display***<br>
<image src="digrams/esp32_lcd.png"><br>
<a href="code/main_lcd.cpp">View LCD display containing weather and alarm data code here.</a><br>

<hr>


**No need for testing, device is operating successfuly and same as the pervious test**
<br><image src="digrams/lcd_prototype.gif.gif"><br>

<hr>

***Example of the demo alarm system***

<image src="digrams/led_lcd_esp32.gif"><br>

<p>This alarm system is not yet finished and waiting for a speaker alarm and more extra leds to be added.</p>
<a href="https://github.com/RaziFalah/agriculture-project/blob/main/video%20log/2023-09-18_14-13-18.mp4">Download video here</a>

<hr>

***example of light supplier***

<image src="digrams/light_supplier.gif"><br>

<p>This light supplier works only in the day, it determines if it should run or not based on Openweather API to get night/day status and also a light sensor.</p>




<h1><a href="docs/Error.md/">Visit error log here</a></h1>
