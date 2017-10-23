#include <Motor.h>

#define MOTOR_A     2
#define MOTOR_B     3
#define MOTOR_SPEED 0.5
#define MOTOR_DELAY 2000

Motor motor(MOTOR_A, MOTOR_B);

void setup() {
  // put your setup code here, to run once:
}

void loop() {
  // put your main code here, to run repeatedly:
  motor.set(MOTOR_SPEED);
  delay(MOTOR_DELAY);
  motor.set(-MOTOR_SPEED);
  delay(MOTOR_DELAY);
}
