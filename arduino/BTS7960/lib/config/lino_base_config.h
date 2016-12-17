#ifndef LINO_BASE_CONFIG_H
#define LINO_BASE_CONFIG_H

#define DEBUG 0

#define K_P 0.05 // P constant
#define K_I 0.9 // I constant
#define K_D 0.1 // D constant

// define your robot' specs here
#define MAX_RPM 45 // motor's maximum RPM
#define COUNTS_PER_REV 4000 // wheel encoder's no of ticks per rev
#define WHEEL_DIAMETER 0.15 // wheel's diameter in meters
#define PWM_BITS 8 // PWM Resolution of the microcontroller
#define BASE_WIDTH 0.43 // width of the plate you are using

// ENCODER PINS
// left side encoders pins
#define MOTOR1_ENCODER_A 17 // front_A
#define MOTOR1_ENCODER_B 16 // front_B

#define MOTOR3_ENCODER_A 15 // rear_A
#define MOTOR3_ENCODER_B 14 // rear_B

// right side encoders pins
#define MOTOR2_ENCODER_A 12 // front_A
#define MOTOR2_ENCODER_B 11 // front_B

#define MOTOR4_ENCODER_A 9  // rear_A
#define MOTOR4_ENCODER_B 10 // rear_B

// MOTOR PINS
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
