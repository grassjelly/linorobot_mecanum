#ifndef LINO_BASE_CONFIG_H
#define LINO_BASE_CONFIG_H

#define L298_DRIVER
// #define BTS7960_DRIVER

#define DEBUG 0

/*BTS7960 PID
#define K_P 0.05 // P constant
#define K_I 0.5 // I constant
#define K_D 0.1 // D constant
*/

#define K_P 0.6 // P constant
#define K_I 0.3 // I constant
#define K_D 0.5 // D constant

// define your robot' specs here
#define MAX_RPM 330 // motor's maximum RPM
#define COUNTS_PER_REV 1650 // wheel encoder's no of ticks per rev
#define WHEEL_DIAMETER 0.10 // wheel's diameter in meters
#define PWM_BITS 8 // PWM Resolution of the microcontroller
#define BASE_WIDTH 0.23 // width of the plate you are using

// ENCODER PINS
// left side encoders pins
#define MOTOR1_ENCODER_A 15 // front_A
#define MOTOR1_ENCODER_B 14 // front_B

#define MOTOR3_ENCODER_A 17 // rear_A
#define MOTOR3_ENCODER_B 16 // rear_B

// right side encoders pins
#define MOTOR2_ENCODER_A 12 // front_A
#define MOTOR2_ENCODER_B 11 // front_B

#define MOTOR4_ENCODER_A 10  // rear_A
#define MOTOR4_ENCODER_B 9 // rear_B

#ifdef L298_DRIVER
  //left side motor pins
  #define MOTOR1_PWM 21
  #define MOTOR1_IN_A 20
  #define MOTOR1_IN_B 1

  #define MOTOR3_PWM 22
  #define MOTOR3_IN_A 23
  #define MOTOR3_IN_B 0

  //right side motor pins
  #define MOTOR2_PWM 5
  #define MOTOR2_IN_A 8
  #define MOTOR2_IN_B 6

  #define MOTOR4_PWM 4
  #define MOTOR4_IN_A 2
  #define MOTOR4_IN_B 3
#endif

#ifdef BTS7960_DRIVER
  // left side motor pins
  #define MOTOR1_IN_A 22
  #define MOTOR1_IN_B 23

  #define MOTOR3_IN_A 21
  #define MOTOR3_IN_B 20

  // right side motor pins
  #define MOTOR2_IN_A 6
  #define MOTOR2_IN_B 5

  #define MOTOR4_IN_A 3
  #define MOTOR4_IN_B 4
#endif

#endif
