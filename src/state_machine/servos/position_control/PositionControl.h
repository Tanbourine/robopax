#pragma once

#include "../../State.h"
#include "../../../components/servos/ServoControllerComponent.h"
#include <vector>
#include "../../step_sequencer/Step.h"
#include "../../StateMachine.h"
#include <memory>

class PositionControl : public State {
public:
    PositionControl(Logger& logger, ServoControllerComponent& motor);

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
    std::unique_ptr<StepSequencer> m_stepSequencer = std::make_unique<StepSequencer>(m_logger);

private:
    ServoControllerComponent& m_motor;
};