#pragma once

#include <cstdint>
#include <string>
#include "../state_machine/motors/models/MotorData.h"

enum class ControlMode {
    POSITION,
    TORQUE
};

class MotorController {
public:
    MotorController(MotorData data);

    // Initialize the motor controller (hardware or sim)
    virtual void init() = 0;

    // Set control mode (position or torque)
    virtual void setControlMode(ControlMode mode) = 0;

    // Command a position (in degrees or radians, your choice)
    virtual void setDesiredPosition(float position) = 0;

    virtual void setMaxVelocity(float maxVelocity_deg_s) = 0;

    // Update method, called periodically to step control logic
    virtual void update(float deltaTime) = 0;

    // Optionally, read back actual position/torque
    virtual float getActualPosition() const = 0;


protected:
    MotorData m_data;
};
