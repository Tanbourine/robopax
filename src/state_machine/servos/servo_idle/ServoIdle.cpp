#include <iostream>
#include "ServoIdle.h"
#include "../../State.h"
#include "../../../servos/ServoController.h"
#include "../../Permissive.h"
#include "../../../servos/models/ServoData.h"

ServoIdle::ServoIdle(Logger& logger, ServoIdleData& data, ServoController& motor): m_data(data), m_motor(motor), State(logger, "ServoIdle", StateEnum::IDLE, StateEnum::ABORTING) {

    registerPermissive(StateEnum::POSITION_CONTROL, Permissive([this]() { return m_motor.getActualPosition() == 30.0; }, "Exit idle mode when position is at resting position"));
};

void ServoIdle::onActivate()
{
    // std::cout << getName() << " is active!" << std::endl;
}

void ServoIdle::onDeactivate()
{
    // std::cout << getName() << " is deactivated!" << std::endl;
}

void ServoIdle::onUpdate(int deltaMs)
{
    m_motor.setDesiredPosition(30.0);
    m_motor.update(deltaMs);
    m_logger.log([this](std::stringstream& ss) { ss << "Motor position: " << m_motor.getActualPosition(); });
}

bool ServoIdle::shouldAbort()
{
    return false;
}

void ServoIdle::createSteps()
{
    std::vector<Step> m_steps;
}





  