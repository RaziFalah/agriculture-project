<image src="../digrams/intro.png">

## Table of contents
* [Alarm and information speaker](#alarm-and-information-speaker)
* [Alarm lights](#alarm-lights)
* [Artificial lights](#artificial-lights)
* [Automatic ceiling](#automatic-ceiling)
* [Cooling fan](#cooling-fan)
* [ESP32 CAM](#esp32-cam)
* [Gas detector](#gas-detector)
* [LCD information and alarm display](#lcd-information-and-alarm-display)
* [Moisture sensor](#moisture-sensor)
* [Stepper motor](#stepper-motor)
* [Water pump](#water-pump)
* [Eroom](#eroom)

<h1>Alarm and information speaker</h1>
<image src="../digrams/alarm_information_speaker.png">
<p>This device is responsible to emit sonic information or in case of alarm code it will be activated as well. </p>

<h1>Alarm lights</h1>
<image src="../digrams/Alarm_lights.png">
<p>In case of an alarm code, this lights will be activated and will blink fast in order to ensure a more precise evacuation</p>
<hr>
<h1>Artificial lights</h1>
<image src="../digrams/artificial_lights.png">
<p>Artifical lights will play a role that is parallel with the automatic ceiling, they both will act in respect to the data provided by the sensors and by the API.</p>
<hr>
<h1>Automatic ceiling</h1>
<image src="../digrams/automatic_ceiling.png">
<p>As mentioned above this ceiling will play a role that is parallel with the artifical lights, they both will act in respect to the data provided by the sensors and by the API.</p>
<hr>
<h1>Cooling fan</h1>
<image src="../digrams/cooling_fan.png">
<p>This is an estimated diagram that shows the function of the cooling fan, as almost every component. the cooling fan will turn on/off in respect to the data provided by the API and sensors.</p>
<hr>
<h1>ESP32 CAM</h1>
<image src="../digrams/ESP32-CAM.png">
<p>This ecam will provide images and video streaming of the situation of inside the house.</p>
<hr>
<h1>Gas detector</h1>
<image src="../digrams/gas_detector.png">
<p>The gas detector will be on the watch for any risks of a fire, such as gas leakage or abnormal about of co2. It will either activate emergency code or send notification to the lcd display according to the situation</p>
<hr>
<h1>LCD information and alarm display</h1>
<image src="../digrams/lcd_display.png">
<p>As the observed from the name, this display is responsible for displaying information and alarm status</p>
<hr>
<h1>Moisture sensor</h1>
<image src="../digrams/moisture_sensor.png">
<p>This sensor will work strictly with the water pump motor, and will be the first mean to decide if the plants need water supply. along with the humidity, temp sensors and also the API</p>
<hr>
<h1>Stepper motor</h1>
<image src="../digrams/stepper_motor.png">
<p>This motor will be responsible for adjusting the ceiling</p>
<hr>
<h1>Water pump</h1>
<image src="../digrams/water_pump.png">
<p>As mentioned above the water pump will supply the plants with water as the sensors and API instruct.</p>
<h1>Eroom</h1>
<image src="../digrams/eroom.png">
<p>The errom will be the brain of this house, it will host the esp32 and will be the destination of all the wiring. It will also architecturally hold the ceiling when it extends backwards to allow sunlight to access the plants. Please note that this image shown above shows only the structure of the room, it is empty and does not contain necessary components yet.</p>
