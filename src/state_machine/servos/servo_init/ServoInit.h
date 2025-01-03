#pragma once

#include "../../State.h"
#include "../../../common/logger/Logger.h"
#include "../../../components/servos/ServoControllerComponent.h"

class ServoInit: public State {
public:
    ServoInit(Logger& logger, ServoControllerComponent& motor);

protected:
    void onActivate() override;
    void onDeactivate() override;
    void onUpdate(int deltaMs) override;
    bool shouldAbort() override;


private:
    ServoControllerComponent& m_motor;


};