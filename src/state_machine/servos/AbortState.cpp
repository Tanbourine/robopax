#include <iostream>
#include "AbortState.h"
#include "../../components/servos/ServoControllerComponent.h"
#include "../State.h"
#include <vector>
#include "../step_sequencer/Step.h"

AbortState::AbortState(Logger& logger, ServoControllerComponent& motor): m_motor(motor), State(logger, "AbortState", StateEnum::ABORTING, StateEnum::ABORTED) 
{
};

void AbortState::onActivate()
{
}

void AbortState::onDeactivate()
{
}

void AbortState::onUpdate(int deltaMs)
{
    m_motor.setDesiredPositionDeg(m_motor.getActualPosition());
    m_logger.log([this](std::stringstream& ss) { ss << "Aborting motor at position: " << m_motor.getActualPosition(); });
}

bool AbortState::shouldAbort()
{
    return false;
}

