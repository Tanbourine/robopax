#pragma once

#include "../State.h"
#include "../../components/servos/ServoControllerComponent.h"
#include <vector>
#include "../step_sequencer/Step.h"

class AbortState : public State {
public:
    AbortState(Logger& logger, ServoControllerComponent& motor);

protected:
    void onActivate() override;
    void onDeactivate() override;
    void onUpdate(int deltaMs) override;
    bool shouldAbort() override;

    StateEnum m_state;
    std::string m_stateName;
    bool m_isActive;
    std::vector<Step> m_steps;

private:
    ServoControllerComponent& m_motor;

};