

int led = 13;
//int button = 12;

void setup() {
pinMode(led, OUTPUT);
//pinMode(button, INPUT);
Serial.begin(9600);
}

void loop(){
if(Serial.available() > 0) {
char ledState = Serial.read();
if(ledState == 'y'){
digitalWrite(led, HIGH);
Serial.println("y is pressed");
}
if(ledState == 'n'){
digitalWrite(led, LOW);
Serial.println("n is pressed");
}
}

/*
int buttonState = digitalRead(button);
if ( buttonState == HIGH){
Serial.println("Button is pressed");
delay(500);

}
*/
}
