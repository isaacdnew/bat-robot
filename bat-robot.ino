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
  // go forward for 0.5 seconds
  digitalWrite(motorPin1, HIGH);
  digitalWrite(motorPin2, LOW);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(100);
  
  // pause for 0.5 seconds to allow motor to stop
  digitalWrite(motorPin1, LOW);
  digitalWrite(motorPin2, LOW);
  digitalWrite(LED_BUILTIN, LOW);
  delay(1900);
}