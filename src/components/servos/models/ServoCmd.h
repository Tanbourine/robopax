#pragma once

class ServoCmd {
public:
    ServoCmd():
        m_enable(false),
        m_position_deg(0.0),
        m_max_velocity_deg_s(0.1),
        m_maxAngle_deg(359.0),
        m_minAngle_deg(0.0) {};
    
    // void setEnable(bool enable);
    // void setPositionCmd(float position_deg);
    // void setMaxVelocityDegPerSec(float degPerSec);
    // void setMaxAngleDeg(float maxAngleDeg);
    // void setMinAngleDeg(float minAngleDeg);

// private:
    bool m_enable;
    float m_position_deg;
    float m_max_velocity_deg_s;
    float m_maxAngle_deg;
    float m_minAngle_deg;
};