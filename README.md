Project by <a href="https://razifalah.com" target="_blank">Razi Falah</a>

<h1>Notes</h1>
<p>In leds, long pin (A) is the positive pin and the short one (C) is the negative one.<br>Resistance is important to protect the led from over voltage which prevent shortage, Also and most importantly it helps control the led power which affect how the led power on and how strong the light is.<br>Integrate 220 ohms resistor to achive best outcome.</p>
<hr>
<center><image src="digrams/prototype.png"></image></center>
<h1>Features</h1>
<h3>Water supplying:</h3>
In this feature there will be a connected water supply tube to every plant in the system, the water will be supplied depending on Whether the ground is dry or not.<br>There will be a wiether check using an API  when the day is rainy the water supplying will be skipped.
<h3>Humidity monitoring</h3>
The system will counduct humidity check only if the Humidity level is unacceptable there will be a warning to the web interface and also a sonic warning. (Humidity checks will be virtual and powered by OpenWeather API).
<h3>Temperature monitoring</h3>
The system will conduct a temperature check if the temperature is unacceptable there will be a warning pop up on the web interface and also a sonic warning. (Temperature checks will be virtual and powered by OpenWeather API).
<h3>Fire and gas alarm</h3>
If a fire or a gas leak was detected by the system the system will automatically signal a sonic alarm and also a popup on the web interface and overwork the water supplying
<h3>Web interface</h3>
Responsible for handiling pop-up alarms.
<h3>Sonic system</h3>
Responsible for handiling sonic alarms.
<h3>Artificial lighting system</h3>
Responsible for providing plants with lights if needed, determined using a photoresistor or time table.
<h1>Components</h1>
