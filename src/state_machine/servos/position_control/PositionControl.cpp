#include <iostream>
#include "PositionControl.h"
#include "../../../components/servos/ServoControllerComponent.h"
#include "../../State.h"
#include "../../Permissive.h"
#include "../../step_sequencer/Step.h"

PositionControl::PositionControl(Logger& logger, ServoControllerComponent& motor): m_motor(motor), State(logger, "MotorPositionControl", StateEnum::POSITION_CONTROL, StateEnum::ABORTING) 
{
    // Register permissives to move to the next state
    registerPermissive(StateEnum::IDLE, Permissive([this]() { return m_motor.getActualPosition() == 65.0; }, "Go back to idle when position is at 45 deg"));

    // Add steps to perform during this state
    m_stepSequencer->addStep(
        Step("Move to 50.0",
            [this]() { m_motor.setDesiredPositionDeg(50.0); },
            Permissive([this]() { return m_motor.getActualPosition() == 50.0; }, "Waiting for motor to reach 50 deg")));

    m_stepSequencer->addStep(
        Step("Move to 40.0",
            [this]() { m_motor.setDesiredPositionDeg(40.0); },
            Permissive([this]() { return m_motor.getActualPosition() == 40.0; }, "Waiting for motor to reach 40 deg")));


    m_stepSequencer->addStep(
        Step("Move to 65.0",
            [this]() { m_motor.setDesiredPositionDeg(65.0); },
            Permissive([this]() { return m_motor.getActualPosition() == 65.0; }, "Waiting for motor to reach 65 deg")));

};

void PositionControl::onActivate()
{
    m_motor.setEnable(true);
}

void PositionControl::onDeactivate()
{
}

void PositionControl::onUpdate(int deltaMs)
{
    m_stepSequencer->update();
}


bool PositionControl::shouldAbort()
{
    return false;
}





  