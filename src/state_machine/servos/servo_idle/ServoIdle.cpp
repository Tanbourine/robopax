#include <iostream>
#include "ServoIdle.h"
#include "../../State.h"
#include "../../../components/servos/ServoControllerComponent.h"
#include "../../Permissive.h"
#include "../../../components/servos/models/ServoData.h"

ServoIdle::ServoIdle(Logger& logger, ServoControllerComponent& motor): m_motor(motor), State(logger, "ServoIdle", StateEnum::IDLE, StateEnum::ABORTING) {

    // No permissives because this is an end state to idle
    // registerPermissive(StateEnum::POSITION_CONTROL, Permissive([this]() { return m_motor.getActualPosition() == 30.0; }, "Exit idle mode when position is at resting position"));
};

void ServoIdle::onActivate()
{
    m_motor.setEnable(true);
    m_motor.setDesiredPositionDeg(30.0);
}

void ServoIdle::onDeactivate()
{
    m_motor.setEnable(false);
}

void ServoIdle::onUpdate(int deltaMs)
{
}

bool ServoIdle::shouldAbort()
{
    return false;
}






  