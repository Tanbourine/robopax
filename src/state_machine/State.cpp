#include <iostream>
#include "State.h"
#include <functional>
#include "../common/logger/Logger.h"
#include <sstream>
#include "Permissive.h"
#include "StateUtils.h"

State::State(Logger& logger, const std::string& stateName, StateEnum stateNumber, StateEnum abortStateId)
    : m_stateName(stateName),
      m_stateId(stateNumber),
      m_abortStateId(abortStateId),
      m_isActive(false),
      m_logger(logger)
{
    std::unordered_map<StateEnum, Permissive> m_permissives;
    registerPermissive(abortStateId, Permissive([this]() { return shouldAbort(); }, "Immediately abort if this permmissve evalutes to true"));
}

void State::activate()
{
    onActivate();
    m_isActive = true;
}

void State::deactivate()
{
    onDeactivate();
    m_isActive = false;
    m_stateActiveDuration_ms = 0;
}

void State::update(int deltaMs)
{
    onUpdate(deltaMs);

    m_logger.log([this](std::stringstream& ss) { ss << m_stateName << " has been active for: " << getStateActiveDurationMs() << " ms";});
    m_stateActiveDuration_ms += deltaMs;
}

void State::registerPermissive(StateEnum destState, Permissive permissive)
{
    if (m_permissives.find(destState) == m_permissives.end())
    {
        m_permissives.insert({destState, std::move(permissive)});
        m_logger.log([this, &destState](std::stringstream& ss) { ss << "Registered permissive to transition to: " << StateUtils::toString(destState); });
    }
}

StateEnum State::evaluatePermissives()
{
    for (auto& pair : m_permissives) {
        if (pair.second.evaluate()) {
            return pair.first;
        }
    }

    return StateEnum::INVALID;
}

std::string State::getName()
{
    return m_stateName;
}

StateEnum State::getStateId()
{
    return m_stateId;
}

float State::getStateActiveDurationMs()
{
    return m_stateActiveDuration_ms;
}

bool State::operator==(State& other)
{
    return m_stateId == other.getStateId();
}

StateEnum State::getAbortStateId()
{
    return m_abortStateId;
}

bool State::getIsActive()
{
    return m_isActive;
}


