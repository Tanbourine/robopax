#pragma once

#include "../../State.h"
#include "../../../servos/ServoController.h"
#include <vector>
#include "../../step_sequencer/Step.h"
#include "../../StateMachine.h"

class PositionControl : public State {
public:
    PositionControl(Logger& logger, ServoController& motor);

protected:
    void onActivate() override;
    void onDeactivate() override;
    void onUpdate(int deltaMs) override;
    bool shouldAbort() override;
    void createSteps() override;

    std::vector<Step> m_steps;
    StateEnum m_state;
    std::string m_stateName;
    bool m_isActive;

private:
    ServoController& m_motor;
};