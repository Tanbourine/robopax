#pragma once

#include <string>
#include "State.h"
#include <unordered_map>
#include <functional>
#include "../common/logger/Logger.h"
#include "../components/component_manager/ComponentManager.h"

class StateMachine
{
public:
    StateMachine(Logger& logger, const std::string& stateMachineName, State& initialState, State& abortState, ComponentManager& componentManager);

    std::string m_stateMachineName;
    void init();
    void update(int deltaTimeMs);
    void registerState(State &state);

private:
    Logger &m_logger;
    State &m_initialState;
    State &m_abortState;
    ComponentManager &m_componentManager;

    State* m_currentState;
    std::unordered_map<StateEnum, State*> m_states;

    void transitionStates(StateEnum destState);
    void abort();
};