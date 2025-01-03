#include <iostream>
#include "AbortState.h"
#include "../../components/servos/ServoControllerComponent.h"
#include "../State.h"
#include <vector>
#include "../step_sequencer/Step.h"

AbortState::AbortState(Logger& logger, ServoControllerComponent& motor): m_motor(motor), State(logger, "AbortState", StateEnum::ABORTING, this->m_abortStateId) 
{
};

void AbortState::onActivate()
{
    // std::cout << getName() << " is active!" << std::endl;
}

void AbortState::onDeactivate()
{
    // std::cout << getName() << " is deactivated!" << std::endl;
}

void AbortState::onUpdate(int deltaMs)
{
    m_motor.setDesiredPositionDeg(m_motor.getActualPosition());
    // m_motor.update(deltaMs);
    m_logger.log([this](std::stringstream& ss) { ss << "Aborting motor at position: " << m_motor.getActualPosition(); });
}

bool AbortState::shouldAbort()
{
    return false;
}

