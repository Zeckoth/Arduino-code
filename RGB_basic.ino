/*In common cathode configuration, High on the Pin leads to LED on.*/
// Define Pins
#define BLUE 3
#define GREEN 5
#define RED 6

void setup()
{
pinMode(RED, OUTPUT);
pinMode(GREEN, OUTPUT);
pinMode(BLUE, OUTPUT);
}

// main loop
void loop()
{

digitalWrite(BLUE, HIGH);
delay(1000);
digitalWrite(BLUE, LOW);
delay(1000);

digitalWrite(GREEN, HIGH);
delay(1000);
digitalWrite(GREEN, LOW);
delay(1000);


digitalWrite(RED, HIGH);
delay(1000);
digitalWrite(RED, LOW);
delay(1000);

digitalWrite(RED, HIGH);
digitalWrite(GREEN, HIGH);
delay(1000);
digitalWrite(RED, LOW);
digitalWrite(GREEN, LOW);
delay(1000);

digitalWrite(BLUE, HIGH);
digitalWrite(GREEN, HIGH);
delay(1000);
digitalWrite(BLUE, LOW);
digitalWrite(GREEN, LOW);
delay(1000);

digitalWrite(BLUE, HIGH);
digitalWrite(RED, HIGH);
delay(1000);
digitalWrite(BLUE, LOW);
digitalWrite(RED, LOW);
delay(1000);

}
