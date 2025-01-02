#pragma once

#include <cstdint>
#include <string>
#include "models/ServoData.h"
#include "models/ServoCmd.h"
#include "../Component.h"

class ServoControllerComponent : public Component {
public:
    ServoControllerComponent(const std::string& componentName, ServoData& data, ServoCmd& cmd): m_data(data), m_cmd(cmd), Component(componentName) {};

    virtual void init() = 0;

    virtual void setEnable(bool enable) = 0;

    virtual void setDesiredPositionDeg(float positionDeg) = 0;

    virtual void setMaxVelocityDegPerSec(float maxVelocityDegPerSec) = 0;

    virtual void setAngleLimits(float minAngleDeg, float maxAngleDeg) = 0;

    // Optionally, read back actual position/torque
    virtual float getActualPosition() const = 0;



protected:
    ServoData& m_data;
    ServoCmd& m_cmd;
};
