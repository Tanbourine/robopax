#include "ServoInit.h"
#include "../../../common/logger/Logger.h"
#include "../../State.h"
#include "../../../components/servos/ServoControllerComponent.h"
#include "../../Permissive.h"

ServoInit::ServoInit(Logger& logger, ServoControllerComponent& motor): m_motor(motor), State(logger, "ServoInit", StateEnum::INIT, StateEnum::ABORTING) {
    registerPermissive(StateEnum::POSITION_CONTROL, Permissive([this]() { return m_motor.getActualPosition() == 0; }, "Finish initialization when position is at 0.0")); 
};

void ServoInit::onActivate()
{
    m_motor.setAngleLimits(0.0, 180.0);
    m_motor.setMaxVelocityDegPerSec(25.0);
    m_motor.setEnable(true);
    m_motor.setDesiredPositionDeg(0.0);
}

void ServoInit::onDeactivate()
{
    m_motor.setEnable(false);

}

void ServoInit::onUpdate(int deltaMs)
{

}

bool ServoInit::shouldAbort()
{
    return false;
}


