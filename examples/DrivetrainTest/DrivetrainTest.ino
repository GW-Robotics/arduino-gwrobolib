/*
  DrivetrainTest

  Controls a 2-motor drivetrain (default using an L298N Motor Driver). it will move in a square.

  It is important to note that the drivetrain class can use any child of the SpeedController class.
  For the L298N, the ports must be PWM ports.

  modified 2 Jan 2018
  by Nam Tran

  This example code is in the public domain.
*/

#include <L298N.h>
#include <RobotDrive.h>

// Left motor ports
#define MOTOR_L_A   3
#define MOTOR_L_B   5

// Right motor ports
#define MOTOR_R_A   9
#define MOTOR_R_B   10

// Variable settings for behaviour
#define MOTOR_SPEED 0.5
#define MOVE_DELAY  2000

// motors for the drivetrain
L298N motor_left(MOTOR_L_A, MOTOR_L_B);
L298N motor_right(MOTOR_R_A, MOTOR_R_B);

// RobotDrive class that comes with most needed drivetrain functions
RobotDrive drivetrain(&motor_left, &motor_right);

// the setup function runs once when you press reset or power the board
void setup() {
  // No setup required
}

// the loop function runs over and over again forever
void loop() {
  drivetrain.arcadeDrive(MOTOR_SPEED, 0.0); // moves the drivetrain forward
  delay(MOVE_DELAY);                        // waits for a set time
  drivetrain.arcadeDrive(0.0, MOTOR_SPEED); // turns the drivetrain to the right
  delay(MOVE_DELAY);                        // waits for a set time
}
