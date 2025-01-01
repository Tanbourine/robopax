#pragma once

#include <cstdint>
#include <string>
#include "ServoController.h"
#include "models/ServoData.h"
#include "models/ServoCmd.h"

class ServoController {
public:
    ServoController(ServoData& data, ServoCmd& cmd): m_data(data), m_cmd(cmd) {};

    // Initialize the motor controller (hardware or sim)
    virtual void init() = 0;

    // Command a position (in degrees or radians, your choice)
    virtual void setDesiredPosition(float position) = 0;

    virtual void setMaxVelocity(float maxVelocity_deg_s) = 0;

    // Update method, called periodically to step control logic
    virtual void update(float deltaTime_ms) = 0;

    // Optionally, read back actual position/torque
    virtual float getActualPosition() const = 0;


protected:
    ServoData& m_data;
    ServoCmd& m_cmd;
};
