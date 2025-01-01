#include <iostream>
#include "StateMachine.h"
#include "motors/motor_idle/MotorIdle.h"
#include <functional>
#include "StateUtils.h"

StateMachine::StateMachine(Logger& logger, const std::string &stateMachineName, State& initialState) : m_stateMachineName(stateMachineName), m_currentState(initialState), m_logger(logger)
{
    std::unordered_map<StateEnum, std::reference_wrapper<State>> m_states;
    registerState(initialState);
};

void StateMachine::init()
{
    std::cout << m_stateMachineName << " is initialized!" << std::endl;
}

void StateMachine::update(int deltaTimeMs)
{
    m_currentState.update(deltaTimeMs);

    StateEnum next_state = m_currentState.evaluatePermissives();
    if (next_state != StateEnum::UNSET && next_state != StateEnum::INVALID)
    {
        transitionStates(next_state);
        std::cout << m_stateMachineName << " is updated to " << m_currentState.getName() << std::endl;
    }
    else 
    {
        std::cout << m_stateMachineName << " has not transitioned away from: " << m_currentState.getName() << std::endl;
    }

}

void StateMachine::transitionStates(StateEnum destState)
{
    std::cout << "Transitioning from " << StateUtils::toString(m_currentState.getStateId()) << " to : " << StateUtils::toString(destState) << std::endl;
    m_currentState.deactivate();
    auto pair = m_states.find(destState);
    if (m_states.find(destState) != m_states.end())
    {
        m_currentState = pair->second.get();
        m_currentState.activate();
    }
}

void StateMachine::registerState(State& state)
{
    if (m_states.find(state.getStateId()) == m_states.end())
    {
        // Not found in map so it is a new state we can safely register
        m_states.insert({state.getStateId(), std::ref(state)});
    }
    std::cout << "Registered state " << state.getName() << std::endl;
}

namespace std
{
    template <>
    struct hash<State>
    {
        std::size_t operator()(State &state) const
        {
            return std::hash<StateEnum>()(state.getStateId());
        }
    };
}
