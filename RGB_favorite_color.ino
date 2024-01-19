//https://www.rapidtables.com/web/color/RGB_Color.html
#define BLUE 3
#define GREEN 5
#define RED 6

// choose an RGB value between 0 and 255 to change the color.
int Rvalue=128;
int Gvalue=0;
int Bvalue=128;

int delayTime = 1000;

void setup()
{
pinMode(RED, OUTPUT);
pinMode(GREEN, OUTPUT);
pinMode(BLUE, OUTPUT);

}

#define delayTime 1000 // fading time between colors

// main loop
void loop()
{

analogWrite(RED, Rvalue);
analogWrite(GREEN, Gvalue);
analogWrite(BLUE, Bvalue);

delay(delayTime);

digitalWrite(RED, LOW);
digitalWrite(GREEN, LOW);
digitalWrite(BLUE, LOW);

delay(delayTime);

}
