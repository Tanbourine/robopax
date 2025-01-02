#include <iostream>
#include "StateMachine.h"
#include "servos/servo_idle/ServoIdle.h"
#include <functional>
#include "StateUtils.h"

StateMachine::StateMachine(Logger &logger, const std::string &stateMachineName, State &initialState, State &abortState, ComponentManager& componentManager) :
    m_stateMachineName(stateMachineName),
    m_currentState(initialState),
    m_logger(logger),
    m_initialState(initialState),
    m_abortState(abortState),
    m_componentManager(componentManager)
{
    std::unordered_map<StateEnum, std::reference_wrapper<State>> m_states;
    registerState(initialState);
    registerState(abortState);
};

void StateMachine::init()
{
    m_logger.log([this](std::stringstream &ss)
                 { ss << m_stateMachineName << " is initialized!"; }, LogLevel::INFO);
    
    m_currentState.get().activate();
}

void StateMachine::update(int deltaTimeMs)
{
    try
    {
        m_componentManager.readComponents(deltaTimeMs);

        StateEnum next_state = m_currentState.get().evaluatePermissives();
        if (next_state != StateEnum::UNSET && next_state != StateEnum::INVALID)
        {
            transitionStates(next_state);
        }
        else
        {
            // m_logger.log([this](std::stringstream &ss)
            //              { ss << m_stateMachineName << " has not transitioned away from: " << m_currentState.get().getName(); }, LogLevel::INFO);
        }

        m_currentState.get().update(deltaTimeMs);

        m_componentManager.writeComponents(deltaTimeMs);
    }
    catch (const std::exception &ex)
    {
        m_logger.log([this, &ex](std::stringstream &ss)
                     { ss << "Failed to update state machine with error: " << ex.what(); }, LogLevel::FATAL);
        abort();
    }
}

void StateMachine::transitionStates(StateEnum destState)
{
    try
    {
        m_logger.log([this, &destState](std::stringstream &ss)
                     { ss << "Transitioning from " << StateUtils::toString(m_currentState.get().getStateId()) << " to : " << StateUtils::toString(destState); });
        m_currentState.get().deactivate();
        auto pair = m_states.find(destState);
        if (m_states.find(destState) != m_states.end())
        {
            m_currentState = std::ref(pair->second.get());
            m_currentState.get().activate();
        }
    }
    catch (const std::exception &ex)
    {
        m_logger.log([this, &ex](std::stringstream &ss)
                     { ss << "Failed to transition states: " << ex.what(); }, LogLevel::FATAL);
        abort();
    }
}

void StateMachine::abort()
{
    transitionStates(m_abortState.getStateId());
    m_logger.log([](std::stringstream& ss) { ss << "Shutting down state machine due to abort!"; }, LogLevel::FATAL);
    throw std::runtime_error("Aborted state machine!");
}

void StateMachine::registerState(State &state)
{
    if (m_states.find(state.getStateId()) == m_states.end())
    {
        // Not found in map so it is a new state we can safely register
        m_states.insert({state.getStateId(), std::ref(state)});
    }
    m_logger.log([this, &state](std::stringstream &ss)
                 { ss << "Registered state " << state.getName(); });
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
