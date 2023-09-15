Project by <a href="https://razifalah.com" target="_blank">Razi Falah</a>.<br>
Micro-controller board: ESP32.<br>
APIs: openweather.<br>

<h1>Notes</h1>
<p>In leds, long pin (A) is the positive pin and the short one (C) is the negative one.<br>Resistance is important to protect the led from over voltage which prevent shortage, Also and most importantly it helps control the led power which affect how the led power on and how strong the light is.<br>Integrate 220 ohms resistor to achive best outcome.</p>
<hr>
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
<h4>Sonic system</h4>
Responsible for handiling sonic alarms.
<h4>Artificial lighting system</h4>
Responsible for providing plants with lights if needed, determined using a photoresistor or time table. <br>
<br><hr>

***Exampe of the code running in the ESP32 according to the API data***

<image src="digrams/esp32_prototype.png">

<h1>Components</h1>
<h4>Needed components</h4>

<ul>
  <li>Moisture sensor</li>
  <li>Photoresistor</li>
  <li>Gas sensor</li>
  <li>Sonic alarm</li>
  <li>Water supplier</li>
  <li>Light supplier</li>
</ul>



<h1>Functions</h1>
<h4>API Connection</h4>
<p>ESP32-WIFI connection code with openweather API using http request</p>
<a href="code/API_Connection.cpp">View API http call code here & init wifi here.</a>
