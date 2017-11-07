//
//  Extinguisher.cpp
//  
//
//  Created by Alex Broaddus on 10/30/17.
//

#include "Arduino.h"
#include "Extinguisher.h"

Extinguisher::Extinguisher(int pin){
    _pin = pin;
    _power = 1;
    isReversed = false;
    attach(_pin);
    write(90);
}

void Extinguisher::start(){
    if(!isReversed)
        write(90 + 90*_power);
    else
        write(90 + 90*_power*-1);
}

void Extinguisher::stop(){
    write(90);
}

void Extinguisher::setPower(float power){
    if(power > 1)
        power = 1;
    else if(power < 0)
        power = 0;
    _power = power;
    if(isOn())
        start();
}

float Extinguisher::getPower(){
    return _power;
}

bool Extinguisher::isOn(){
    return read() != 90;
}

void Extinguisher::reverse(){
    isReversed = !isReversed;
}
