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
    addStep(
        Step("Move to 50.0",
            [this]() { m_motor.setDesiredPositionDeg(50.0); },
            [this]() { return m_motor.getActualPosition() == 50.0; }));

    addStep(
        Step("Move to 40.0",
            [this]() { m_motor.setDesiredPositionDeg(40.0); },
            [this]() { return m_motor.getActualPosition() == 40.0; }));


    addStep(
        Step("Move to 65.0",
            [this]() { m_motor.setDesiredPositionDeg(65.0); },
            [this]() { return m_motor.getActualPosition() == 65.0; }));

};

void PositionControl::onActivate()
{
}

void PositionControl::onDeactivate()
{
}

void PositionControl::onUpdate(int deltaMs)
{

    // m_motor.setDesiredPosition(65.0);
    // m_motor.update(deltaMs);

    m_stepSequencer.evaluate();
    m_stepSequencer.evaluatePermissives();

    // if (m_stateActiveDuration_ms > 1500) {
    //     throw std::runtime_error("AHHH!");
    // }
    m_logger.log([this](std::stringstream& ss) { ss << "Motor position: " << m_motor.getActualPosition(); }, LogLevel::INFO);
}


bool PositionControl::shouldAbort()
{
    return false;
}

void PositionControl::createSteps()
{
    std::vector<Step> m_step;
}




  