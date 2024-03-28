#include <L293D.h>

// This motor opens a door in a peek-a-boo toy.
int waittime;
int motorPin1 = 2; // digital pin
int motorPin2 = 3; // digital pin
int flapMotorEnablePin = 6; // analog pin
//L293D flapMotor(motorPin1, motorPin2, 

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
  delay(2500);
  
  // pause
  digitalWrite(motorPin1, LOW);
  digitalWrite(motorPin2, LOW);
  digitalWrite(LED_BUILTIN, LOW);
  delay(1500);
}