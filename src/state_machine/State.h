#pragma once

#include <unordered_map>
#include <string>
#include <functional>
#include "../common/logger/Logger.h"
#include "States.h"

class State {
public:
    State(Logger& logger, const std::string& stateName, StateEnum stateNumber);

    void activate();
    void deactivate();
    void update(int deltaMs);
    StateEnum evaluatePermissives();

    // Optional: name or ID for logging/debug
    std::string getName();
    StateEnum getStateId();

    float getStateActiveDurationMs();

    bool operator==(State& other);

    std::unordered_map<StateEnum, std::function<bool()>> m_permissives;


protected:
    void registerPermissive(StateEnum destState, std::function<bool()> permisive);
    virtual void onActivate() = 0;
    virtual void onDeactivate() = 0;
    virtual void onUpdate(int deltaMs) = 0;

    Logger& m_logger;
    std::string m_stateName;
    StateEnum m_stateId;
    bool m_isActive;
    float m_stateActiveDuration_ms;
    // State& m_prevState;

};
