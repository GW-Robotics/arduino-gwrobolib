#include <L298N.h>
#include <RobotDrive.h>

#define MOTOR_L_A   2
#define MOTOR_L_B   3
#define MOTOR_R_A   4
#define MOTOR_R_B   5

#define MOTOR_SPEED 0.5
#define MOVE_DELAY  2000

L298N motor_left(MOTOR_L_A, MOTOR_L_B);
L298N motor_right(MOTOR_R_A, MOTOR_R_B);

RobotDrive drivetrain(&motor_left, &motor_right);

void setup() {
  // put your setup code here, to run once:
}

void loop() {
  // put your main code here, to run repeatedly:
  drivetrain.arcadeDrive(MOTOR_SPEED, 0.0);
  delay(MOVE_DELAY);
  drivetrain.arcadeDrive(0.0, MOTOR_SPEED);
  delay(MOVE_DELAY);
}
