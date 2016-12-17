#ifndef Motor_h
#define Motor_h

#include "Arduino.h"

class Motor
{
    public:
          int rpm;
          static int counts_per_rev_;

          Motor(int motor_pinA, int motor_pinB);
          void updateSpeed(long encoder_ticks);
          void spin(int pwm);

    private:
          long prev_encoder_ticks_;
          unsigned long prev_update_time_;
          int motor_pinA_;
          int motor_pinB_;
};

#endif
