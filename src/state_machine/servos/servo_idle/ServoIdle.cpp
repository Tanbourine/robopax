#include <iostream>
#include "ServoIdle.h"
#include "../../State.h"
#include "../../../components/servos/ServoControllerComponent.h"
#include "../../Permissive.h"
#include "../../../components/servos/models/ServoData.h"

ServoIdle::ServoIdle(Logger& logger, ServoIdleData& data, ServoControllerComponent& motor): m_data(data), m_motor(motor), State(logger, "ServoIdle", StateEnum::IDLE, StateEnum::ABORTING) {

    // No permissives because this is an end state to idle
    // registerPermissive(StateEnum::POSITION_CONTROL, Permissive([this]() { return m_motor.getActualPosition() == 30.0; }, "Exit idle mode when position is at resting position"));
};

void ServoIdle::onActivate()
{
    // Write motor commands
    m_motor.setAngleLimits(0.0, 180.0);
    m_motor.setMaxVelocityDegPerSec(25.0);
    m_motor.setEnable(true);

    m_motor.setDesiredPositionDeg(30.0);

}

void ServoIdle::onDeactivate()
{
    // std::cout << getName() << " is deactivated!" << std::endl;
}

void ServoIdle::onUpdate(int deltaMs)
{
    // m_motor.update(deltaMs);
    // m_logger.log([this](std::stringstream& ss) { ss << "Motor position: " << m_motor.getActualPosition(); });
}

bool ServoIdle::shouldAbort()
{
    return false;
}

void ServoIdle::createSteps()
{
    std::vector<Step> m_steps;
}





  