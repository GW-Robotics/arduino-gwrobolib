//
//  Extinguisher.h
//  
//
//  Created by Alex Broaddus on 10/30/17.
//

#ifndef Extinguisher_h
#define Extinguisher_h

#include "Arduino.h"
#include "Servo.h"

class Extinguisher : public Servo{
public:
    Extinguisher(int pin);
    void start();
    void stop();
    void setPower(float power);
    float getPower();
    bool isOn();
    void reverse();
private:
    int _pin;
    float _power;
    void rewrite();
    bool isReversed;
};

#endif /* Extinguisher_h */
