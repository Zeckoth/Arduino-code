/*
This code is used to read analog voltage values using a multimeter
*/

//PWM pin that analog output is connected to
const int analogOutPin = 9; 


void setup() {
}

void loop() {
  // change the analog out value:
  analogWrite(analogOutPin, 200);
  delay(2);
}
