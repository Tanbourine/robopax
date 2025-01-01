#pragma once

#include <string>
#include "State.h"
#include <unordered_map>
#include <functional>
#include "../common/logger/Logger.h"

class StateMachine {
public:
    StateMachine(Logger& logger, const std::string& stateMachineName, State& initialState);

    void init();
    void update(int deltaTimeMs);
    void registerState(State& state);
    std::string m_stateMachineName;

private:
    Logger& m_logger;
    void transitionStates(StateEnum destState);
    State& m_currentState;
    std::unordered_map<StateEnum, std::reference_wrapper<State>> m_states;
};