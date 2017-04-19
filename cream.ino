/******************************************************************************

Making "music" with a LilyPad Buzzer
Jennifer Hasegawa

This code instructs a LilyPad Buzzer to play the C.R.E.A.M. hook by the Wu-Tang Clan.

For a great writeup on how a buzzer plays "notes," see https://learn.sparkfun.com/tutorials/lilypad-buzzer-hookup-guide#making-sounds-

******************************************************************************/
// Identify the pin the buzzer is hooked up to
int buzzerPin = 7;

// Name the notes used in the song and associate them with their frequencies. I looked these notes/frequencies up here: http://www.intmath.com/trigonometric-graphs/music.php
const int F1 = 698;
const int F1s = 740;
const int G1 = 784;
const int G1s = 831;
const int A = 880;
const int B = 988;
const int C = 1047;
const int Cs = 1109;
const int D = 1174;
const int Ds = 1245;
const int E = 1318;
const int F2 = 1397;
const int F2s = 1480;

void setup()
{
    // Set the buzzer pin as an OUTPUT
    pinMode(buzzerPin, OUTPUT);
}

void loop()
{
  // Use the tone() function to play each note in the tune. Use the noTone() function to insert rest beats. Carriage returns are used solely to visually indicate measures.
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
}
