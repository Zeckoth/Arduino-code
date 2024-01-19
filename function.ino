
int ledPin1 = 2;
int ledPin2 = 3;
int ledPin3 = 4;
int ledPin4 = 5;
int ledPin5 = 6;
int ledPin6 = 7;
int ledPin7 = 8;
int ledPin8 = 9;
int ledPin9 = 10;
int duration=2000;

void setup() 
{
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(ledPin4, OUTPUT);
  pinMode(ledPin5, OUTPUT);
  pinMode(ledPin6, OUTPUT);
  pinMode(ledPin7, OUTPUT);
  pinMode(ledPin8, OUTPUT);
  pinMode(ledPin9, OUTPUT);
}

void loop() 
{
    H();/*letter H*/
    delay(duration);
  
}

void H(){
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin3, HIGH);
    digitalWrite(ledPin4, LOW);
    digitalWrite(ledPin5, HIGH);
    digitalWrite(ledPin6, LOW);
    digitalWrite(ledPin7, HIGH);
    digitalWrite(ledPin8, HIGH);
    digitalWrite(ledPin9, HIGH);
}
