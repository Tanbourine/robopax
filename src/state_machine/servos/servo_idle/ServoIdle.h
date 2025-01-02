#pragma once

#include "../../State.h"
#include "ServoIdleData.h"
#include "../../../components/servos/ServoControllerComponent.h"
#include <vector>
#include "../../step_sequencer/Step.h"
#include "../../../components/servos/models/ServoData.h"

class ServoIdle : public State {
public:
    ServoIdle(Logger& logger, ServoIdleData& data, ServoControllerComponent& motor);

protected:
    void onActivate() override;
    void onDeactivate() override;
    void onUpdate(int deltaMs) override;
    bool shouldAbort() override;
    void createSteps() override;

    // StateEnum m_state;
    // std::string m_stateName;
    // bool m_isActive;

    ServoIdleData& m_data;
    ServoControllerComponent& m_motor;
    std::vector<Step> m_steps;
};
