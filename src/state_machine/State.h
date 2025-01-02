#pragma once

#include <unordered_map>
#include <string>
#include <functional>
#include "../common/logger/Logger.h"
#include "States.h"
#include "step_sequencer/Step.h"
#include "Permissive.h"
#include "step_sequencer/StepSequencer.h"

class State {
public:
    State(Logger& logger, const std::string& stateName, StateEnum stateId, StateEnum abortStateId);

    void activate();
    void deactivate();
    void update(int deltaMs);
    StateEnum evaluatePermissives();

    // Optional: name or ID for logging/debug
    std::string getName();
    StateEnum getStateId();
    StateEnum getAbortStateId();
    bool getIsActive();
    // StepSequencer getStepSequencer();

    float getStateActiveDurationMs();

    bool operator==(State& other);

    std::unordered_map<StateEnum, Permissive> m_permissives;



protected:
    void registerPermissive(StateEnum destState, Permissive permisive);
    void addStep(Step step);
    virtual void onActivate() = 0;
    virtual void onDeactivate() = 0;
    virtual void onUpdate(int deltaMs) = 0;
    virtual bool shouldAbort() = 0;
    virtual void createSteps() = 0;

    Logger& m_logger;
    std::string m_stateName;
    StateEnum m_stateId;
    StateEnum m_abortStateId;
    bool m_isActive;
    float m_stateActiveDuration_ms;
    // StepSequencer m_stepSequencer;
    // State& m_prevState;

};
