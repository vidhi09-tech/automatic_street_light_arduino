//pin declartaion
//pin mode declaration
//pin data declaration
int ledPin = 13;

int ldrPin = A0;

void setup()
{

    Serial.begin(9600);

    pinMode(ledPin, OUTPUT);

    pinMode(ldrPin, INPUT);
}

void loop()
{

    int val = analogRead(ldrPin);
    Serial.println(val);

    if (val <= 500)
    {

        digitalWrite(ledPin, HIGH);
    }
    else
    {

        digitalWrite(ledPin, LOW);
    }
}