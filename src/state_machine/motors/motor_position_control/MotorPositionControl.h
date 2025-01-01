#pragma once

#include "../../State.h"

class MotorPositionControl : public State {
public:
    MotorPositionControl(Logger& logger);

protected:
    void onActivate() override;
    void onDeactivate() override;
    void onUpdate(int deltaMs) override;

    StateEnum m_state;
    std::string m_stateName;
    bool m_isActive;
};