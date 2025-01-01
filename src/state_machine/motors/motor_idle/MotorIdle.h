#pragma once

#include "../../State.h"
#include "../models/MotorData.h"
#include "MotorIdleData.h"

class MotorIdle : public State {
public:
    // MotorIdle();

    MotorIdle(Logger& logger, MotorIdleData& data);

protected:
    void onActivate() override;
    void onDeactivate() override;
    void onUpdate(int deltaMs) override;

    StateEnum m_state;
    std::string m_stateName;
    bool m_isActive;

    MotorIdleData m_data;
};
