//No additional script required.

void setup() {
  pinMode(12, OUTPUT); //initialise pin 12 and assign it as output 
}

void loop() {
  digitalWrite(12, HIGH); 
  delay(100);                 
  digitalWrite(12, LOW);   
  delay(100);                       
}
