#include <L293D.h>
#define MOTOR_PIN_A 2 // any gpio
#define MOTOR_PIN_B 3 // any gpio
#define MOTOR_ENABLE_PIN 6 // any pwm pin
#define PWM_MOTOR_FREQUENCY 200
#define PWM_MOTOR_RESOLUTION 8
L293D flapMotor(MOTOR_PIN_A, MOTOR_PIN_B, MOTOR_ENABLE_PIN);
int motorSpeed = 0;

void setup()
{
  flapMotor.begin(true);
}

void loop()
{
  // ramp up and down in speed
  for (int i = 0; i <= 100; i++) {
    flapMotor.SetMotorSpeed(i);
    delay(20);
  }
  for (int i = 100; i >= 0; i--) {
    flapMotor.SetMotorSpeed(i);
    delay(20);
  }
  
  /*
  // go forward
  digitalWrite(MOTOR_PIN_A, HIGH);
  digitalWrite(MOTOR_PIN_B, LOW);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(2500);
  
  // pause
  digitalWrite(MOTOR_PIN_A, LOW);
  digitalWrite(MOTOR_PIN_B, LOW);
  digitalWrite(LED_BUILTIN, LOW);
  delay(1500);
  */
}