#include <iostream>
#include "MotorIdle.h"
#include "../../State.h"

// MotorIdle::MotorIdle(): State("MotorIdle", StateEnum::MOTOR_IDLE) {
//     MotorIdleData newData;
//     m_data = newData;
// }

MotorIdle::MotorIdle(Logger& logger, MotorIdleData& data): m_data(data), State(logger, "MotorIdle", StateEnum::MOTOR_IDLE) {

    registerPermissive(StateEnum::MOTOR_POSITION_CONTROL, []() { return true; });
};

void MotorIdle::onActivate()
{
    std::cout << getName() << " is active!" << std::endl;
}

void MotorIdle::onDeactivate()
{
    std::cout << getName() << " is deactivated!" << std::endl;
}

void MotorIdle::onUpdate(int deltaMs)
{

}





  