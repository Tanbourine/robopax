#pragma once

#include "../State.h"
#include "../../servos/ServoController.h"
#include <vector>
#include "../step_sequencer/Step.h"

class AbortState : public State {
public:
    AbortState(Logger& logger, ServoController& motor);

protected:
    void onActivate() override;
    void onDeactivate() override;
    void onUpdate(int deltaMs) override;
    bool shouldAbort() override;
    void createSteps() override;

    StateEnum m_state;
    std::string m_stateName;
    bool m_isActive;
    std::vector<Step> m_steps;

private:
    ServoController& m_motor;

};