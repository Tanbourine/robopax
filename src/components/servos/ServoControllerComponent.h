#pragma once

#include <cstdint>
#include <string>
#include "models/ServoData.h"
#include "models/ServoCmd.h"
#include "../Component.h"
#include <memory>

class ServoControllerComponent : public Component {
public:
    ServoControllerComponent(const std::string& componentName): Component(componentName) {};

    virtual void init() = 0;

    virtual void setEnable(bool enable) = 0;

    virtual void setDesiredPositionDeg(float positionDeg) = 0;

    virtual void setMaxVelocityDegPerSec(float maxVelocityDegPerSec) = 0;

    virtual void setAngleLimits(float minAngleDeg, float maxAngleDeg) = 0;

    // Optionally, read back actual position/torque
    virtual float getActualPosition() const = 0;



protected:
    std::shared_ptr<ServoData> m_data = std::make_shared<ServoData>();
    std::shared_ptr<ServoCmd> m_cmd = std::make_shared<ServoCmd>();
    // ServoData& m_data;
    // ServoCmd& m_cmd;
};
