const int buzzer = 11; //buzzer to arduino pin 11
int tone_duration = 1000;

void setup(){
 
  pinMode(buzzer, OUTPUT); // Set buzzer - pin 11 as an output
  tone(buzzer, 100, tone_duration); // Send 100Hz sound signal...
  delay(tone_duration);        // ...for 1 sec

}

void loop(){

  
}
