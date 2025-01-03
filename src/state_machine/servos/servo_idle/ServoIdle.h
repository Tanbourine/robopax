#pragma once

#include "../../State.h"
#include "../../../components/servos/ServoControllerComponent.h"
#include <vector>
#include "../../step_sequencer/Step.h"
#include "../../../components/servos/models/ServoData.h"
#include "../../../common/logger/Logger.h"

class ServoIdle : public State {
public:
    ServoIdle(Logger& logger, ServoControllerComponent& motor);

protected:
    void onActivate() override;
    void onDeactivate() override;
    void onUpdate(int deltaMs) override;
    bool shouldAbort() override;

    ServoControllerComponent& m_motor;
};
