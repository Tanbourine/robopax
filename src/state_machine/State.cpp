#include <iostream>
#include "State.h"
#include <functional>
#include "../common/logger/Logger.h"

State::State(Logger& logger, const std::string& stateName, StateEnum stateNumber)
    : m_stateName(stateName),
      m_stateId(stateNumber),
      m_isActive(false),
      m_logger(logger)
{
    std::unordered_map<StateEnum, std::function<bool()>> m_permissives;
}

void State::activate()
{
    onActivate();
    m_isActive = true;
    std::cout << "State: " << m_stateName << " is active!" << std::endl;
}

void State::deactivate()
{
    onDeactivate();
    m_isActive = false;
    std::cout << "State: " << m_stateName << " is deactivated!" << std::endl;
}

void State::update(int deltaMs)
{
    onUpdate(deltaMs);

    std::cout << m_stateName << " has been active for: " << getStateActiveDurationMs() << " ms" << std::endl;
    m_stateActiveDuration_ms += deltaMs;
}

void State::registerPermissive(StateEnum destState, std::function<bool()> permissive)
{
    m_permissives[destState] = std::move(permissive);
}

StateEnum State::evaluatePermissives()
{
    for (const auto& pair : m_permissives) {
        if (pair.second()) {
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


