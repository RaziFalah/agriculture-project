<h1>Serial moniter test</h1>
<p>Turning on and off a led using esp32 while simultaneously feed data to the serial console.</p>

<image src="../digrams/esp32_serial_monitor.png">

<h1>Code</h1>



```cpp
void setup() {
  pinMode(OUTPUT, 12);
  Serial.begin(115200);
}

void loop() {
  Serial.println("LED IS NOW ON.");
  analogWrite(12, HIGH);
  delay(10000);
  Serial.println("LED IS NOW OFF.");
  analogWrite(12, LOW);
  delay(10000);
}

```

<a href="https://wokwi.com/projects/378995151004517377">Click here in order to view simulation</a>
