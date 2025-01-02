#pragma once

class ServoData {
public:
    ServoData(): m_position_deg(0.0), m_velocity_deg_s(0.0), m_reverseDirection(false) {};
    float m_position_deg;
    float m_velocity_deg_s;
    bool m_reverseDirection;
};