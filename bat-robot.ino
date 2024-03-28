#include <L293D.h>

// This motor opens a door in a peek-a-boo toy.
int waittime;
int motorPin1 = 2; // 
int motorPin2 = 3;

void setup()
{
  pinMode(motorPin1, OUTPUT);
  pinMode(motorPin2, OUTPUT);
}

void loop()
{
  // go forward
  digitalWrite(motorPin1, HIGH);
  digitalWrite(motorPin2, LOW);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(100);
  
  // pause
  digitalWrite(motorPin1, LOW);
  digitalWrite(motorPin2, LOW);
  digitalWrite(LED_BUILTIN, LOW);
  delay(900);
  
  // go backward
  digitalWrite(motorPin1, LOW);
  digitalWrite(motorPin2, HIGH);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(100);
  
  // pause
  digitalWrite(motorPin1, LOW);
  digitalWrite(motorPin2, LOW);
  digitalWrite(LED_BUILTIN, LOW);
  delay(1900);
}