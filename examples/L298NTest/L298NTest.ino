/*
  L298NTest

  Controls a single motor driven by an L298N.

  It is important the ports must be PWM ports.

  modified 2 Jan 2018
  by Nam Tran

  This example code is in the public domain.
*/

#include <L298N.h>

#define MOTOR_A     2
#define MOTOR_B     3

#define MOTOR_SPEED 0.5
#define MOTOR_DELAY 2000

L298N motor(MOTOR_A, MOTOR_B);

// the setup function runs once when you press reset or power the board
void setup() {
  // No setup required
}

// the loop function runs over and over again forever
void loop() {
  motor.set(MOTOR_SPEED);  // turns the motor forward
  delay(MOTOR_DELAY);      // waits for a set time
  motor.set(-MOTOR_SPEED); // turns the motor backwards
  delay(MOTOR_DELAY);      // waits for a set time
}
