#define FOCUS_PIN 6
#define SHUTTER_PIN 7
int ledPin = 13; // LED connected to digital pin 13

void setup()
{
pinMode(FOCUS_PIN, OUTPUT);
pinMode(SHUTTER_PIN, OUTPUT);
digitalWrite(FOCUS_PIN, LOW);
digitalWrite(SHUTTER_PIN, LOW);
pinMode(ledPin, OUTPUT); //digital pin as output
}

void loop()
{
digitalWrite(FOCUS_PIN, HIGH);
digitalWrite(SHUTTER_PIN, HIGH);
delay(1000); // May want to adjust this
digitalWrite(SHUTTER_PIN, LOW);
digitalWrite(FOCUS_PIN, LOW);
digitalWrite(ledPin, HIGH); // sets the LED on
delay(500); // waits for a second
digitalWrite(ledPin, LOW); // sets the LED off
delay(10000); // Delay’s 30 seconds untill next shot
}
