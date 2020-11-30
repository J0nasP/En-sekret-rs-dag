int red = 8;
int green = 7;
int yellow1 = 6;
int yellow2 = 5;
int yellow3 = 4;
int white = 3;
int blue = 2;

void setup()
{
    pinMode(red, OUTPUT);
    pinMode(green, OUTPUT);
    pinMode(yellow1, OUTPUT);
    pinMode(yellow2, OUTPUT);
    pinMode(yellow3, OUTPUT);
    pinMode(white, OUTPUT);
    pinMode(blue, OUTPUT);
}

void loop()
{   
    /* klokken 7 mangler blomster */
    {
        digitalWrite(green, HIGH);
      	digitalWrite(red, LOW); 
      	delay(1000);

    }
    /*klokken 8 */
    {
        digitalWrite(white, HIGH);
      	delay(3500);
    }
    /*klokken 11:30 */
    {
        digitalWrite(blue, HIGH);
        digitalWrite(white, LOW);
      	delay(1000);
    }
    /*klokken 12:30 */
    {
        digitalWrite(blue, LOW);
        digitalWrite(white, HIGH);
      	delay(2500);
    }
    /*klokken 15 */
    {
        digitalWrite(red, HIGH);
        digitalWrite(white, LOW);
        digitalWrite(green, LOW);
      	delay(16000);
    }
}