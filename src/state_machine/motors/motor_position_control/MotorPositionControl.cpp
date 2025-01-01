#include <iostream>
#include "MotorPositionControl.h"
#include "../../State.h"

MotorPositionControl::MotorPositionControl(Logger& logger): State(logger, "MotorPositionControl", StateEnum::MOTOR_POSITION_CONTROL) 
{
    registerPermissive(StateEnum::MOTOR_IDLE, []() { return true; });
};

void MotorPositionControl::onActivate()
{
    std::cout << getName() << " is active!" << std::endl;
}

void MotorPositionControl::onDeactivate()
{
    std::cout << getName() << " is deactivated!" << std::endl;
}

void MotorPositionControl::onUpdate(int deltaMs)
{

}




  