//This code uses the following Lilypad Protosnap components: 4 white LEDs, 1 RGB LED, and 1 buzzer.
//The LEDs cycle on and off in time to the chorus of C.R.E.A.M by the Wu-Tang Clan played by the buzzer.

#include < Arduino.h >

//set white LED leds to their lilypad petals
int ledPin1 = 10;
int ledPin2 = A3;
int ledPin3 = 11;
int ledPin4 = A2;

//set red and green LEDS on RGB LED to their lilypad petals
int ledPinR = 9;
int ledPinG = 5;

//set buzzer to its lilypad petal
int buzzerPin = A5;

//set buzzer notes and their frequencies
int F1 = 698;
int F1s = 740;
int G1 = 784;
int G1s = 831;
int A = 880;
int B = 988;
int C = 1047;
int Cs = 1109;
int D = 1174;
int Ds = 1245;
int E = 1318;
int F2 = 1397;
int F2s = 1480;

void setup()
  //set white LEDs, red and green LED on RGB LED, and buzzer as outputs
  {
    pinMode(ledPin1, OUTPUT);
    pinMode(ledPin2, OUTPUT);
    pinMode(ledPin3, OUTPUT);
    pinMode(ledPin4, OUTPUT);

    pinMode(ledPinR, OUTPUT);
    pinMode(ledPinG, OUTPUT);

    pinMode(buzzerPin, OUTPUT);
  }

void loop() 
{
  digitalWrite(ledPinG, HIGH); //green led off. lilypad protosnap RGB LED uses a common anode, thus HIGH = off.
  digitalWrite(ledPinR, LOW); //red on

  digitalWrite(ledPin1, HIGH); //top left white LED on
  digitalWrite(ledPin2, HIGH); //top right white LED on

  // Use the tone() function to play each note to the tune. Use the noTone() function to insert rest beats.
  noTone(buzzerPin);
  delay(375);
  tone(buzzerPin, F1s);
  delay(187);
  tone(buzzerPin, G1s);
  delay(187);
  tone(buzzerPin, A);
  delay(350);
  noTone(buzzerPin);
  delay(25);
  tone(buzzerPin, B);
  delay(350);
  noTone(buzzerPin);
  delay(25);

  digitalWrite(ledPinR, HIGH); //red LED off
  digitalWrite(ledPinG, LOW); //green LED on

  digitalWrite(ledPin1, LOW); //top left white LED off
  digitalWrite(ledPin2, LOW); //top right white LED off
  digitalWrite(ledPin3, HIGH); //bottom left white LED on
  digitalWrite(ledPin4, HIGH); //bottom right white LED on

  tone(buzzerPin, Cs);
  delay(375);
  tone(buzzerPin, F2s);
  delay(375);
  tone(buzzerPin, E);
  delay(93);
  tone(buzzerPin, F2);
  delay(93);
  tone(buzzerPin, E);
  delay(187);
  tone(buzzerPin, Ds);
  delay(375);

  digitalWrite(ledPinR, LOW); //red LED on
  digitalWrite(ledPinG, HIGH); //green LED off

  digitalWrite(ledPin1, HIGH); //top left on
  digitalWrite(ledPin2, HIGH); //top right on
  digitalWrite(ledPin3, LOW); //bottom left off
  digitalWrite(ledPin4, LOW); //bottom right off

  tone(buzzerPin, Cs);
  delay(375);
  tone(buzzerPin, B);
  delay(375);
  tone(buzzerPin, A);
  delay(375);
  noTone(buzzerPin);
  delay(50);
  tone(buzzerPin, G1s);
  delay(200);
  noTone(buzzerPin);
  delay(50);

  digitalWrite(ledPinG, LOW); //red LED on
  digitalWrite(ledPinR, HIGH); //green led off

  digitalWrite(ledPin1, LOW); //top left off
  digitalWrite(ledPin2, LOW); //top right off
  digitalWrite(ledPin3, HIGH); //bottom left on
  digitalWrite(ledPin4, HIGH); //bottom right on

  tone(buzzerPin, F1s);
  delay(375);
  noTone(buzzerPin);
  delay(10);
  tone(buzzerPin, F1s);
  delay(375);
  noTone(buzzerPin);
  delay(10);
  tone(buzzerPin, F1s);
  delay(375);
  noTone(buzzerPin);
  delay(375);

  digitalWrite(ledPin1, HIGH); //top left
  digitalWrite(ledPin2, HIGH); //top right
  digitalWrite(ledPin3, LOW); //bottom left
  digitalWrite(ledPin4, LOW); //bottom right
}
