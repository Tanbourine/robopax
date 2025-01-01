#pragma once

#include "MotorController.h"

// A very basic motor simulator: 
// We'll treat the motor as a simple "mass-spring-damper" system 
// or just a naive approach that sets "actual position" to commanded position over time.
class MotorSim : public MotorController {
public:
    MotorSim(MotorData data);

    void init() override;
    void setControlMode(ControlMode mode) override;
    void setDesiredPosition(float position) override;
    void setMaxVelocity(float maxVelocity_deg_s) override;
    void update(float deltaTime) override;

    float getActualPosition() const override;

protected:
    MotorData m_data;

private:
    ControlMode m_mode;
    float m_desiredPosition_deg;
    float m_actualPosition_deg;
    float m_maxVelocity_deg_s;
    float m_jointMin_deg;
    float m_jointMax_deg;

    // For a more realistic simulation, add inertia, damping, etc.
    // e.g. float m_inertia = 0.01f; float m_damping = 0.1f;
};
