<h1>Short description</h1>
Pulse width modulation (PWM) is a modulation technique that generates variable-width pulses to represent the amplitude of an analog input signal. The output switching transistor is on more of the time for a high-amplitude signal and off more of the time for a low-amplitude signal.

<h1>How does PWM modulation work?</h1>
How PWM works. PWM works by switching the power device (such as a transistor, a diode, or an IGBT) on and off at a high frequency, while varying the duty cycle (the ratio of on-time to off-time) of the switch. The duty cycle determines the average output voltage and current of the converter. <br>

<image src="https://content.cdntwrk.com/files/aHViPTg1NDMzJmNtZD1pdGVtZWRpdG9yaW1hZ2UmZmlsZW5hbWU9aXRlbWVkaXRvcmltYWdlXzVlMTVmYmMxMzIxMWIuanBnJnZlcnNpb249MDAwMCZzaWc9YWJkZWI2ODYwNTQ4NzcyNzk0MjQxN2U3OTk0NDkwZWQ%253D">

<h1>PWM in arduino</h1>
The Fading example demonstrates the use of analog output (PWM) to fade an LED. It is available in the File->Sketchbook->Examples->Analog menu of the Arduino software.

Pulse Width Modulation, or PWM, is a technique for getting analog results with digital means. Digital control is used to create a square wave, a signal switched between on and off. This on-off pattern can simulate voltages in between the full Vcc of the board (e.g., 5 V on UNO, 3.3 V on a MKR board) and off (0 Volts) by changing the portion of the time the signal spends on versus the time that the signal spends off. The duration of "on time" is called the pulse width. To get varying analog values, you change, or modulate, that pulse width. If you repeat this on-off pattern fast enough with an LED for example, the result is as if the signal is a steady voltage between 0 and Vcc controlling the brightness of the LED.

In the graphic below, the green lines represent a regular time period. This duration or period is the inverse of the PWM frequency. In other words, with Arduino's PWM frequency at about 500Hz, the green lines would measure 2 milliseconds each. A call to analogWrite() is on a scale of 0 - 255, such that analogWrite(255) requests a 100% duty cycle (always on), and analogWrite(127) is a 50% duty cycle (on half the time) for example.
<br>
<image src="https://docs.arduino.cc/54ef6da144b4531dd9ada686a7e67c56/pwm.gif">
<br>

On some microcontrollers PWM is only available on selected pins. Please consider the pinout diagram of your board to find out which ones you can use for PWM. They are denoted with a tilde sign (~).

Once you get this example running, grab your Arduino and shake it back and forth. What you are doing here is essentially mapping time across the space. To our eyes, the movement blurs each LED blink into a line. As the LED fades in and out, those little lines will grow and shrink in length. Now you are seeing the pulse width.

Written by Timothy Hirzel
