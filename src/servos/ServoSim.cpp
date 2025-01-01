#include "ServoSim.h"

ServoSim::ServoSim(ServoData& data, ServoCmd& cmd)
: m_data(data),
  m_cmd(cmd),
  ServoController(data, cmd)
{ }

void ServoSim::init() {
    // Any initialization logic for the simulation
}


void ServoSim::setDesiredPosition(float position) {
    m_cmd.m_position_deg = position;
}

float ServoSim::getActualPosition() const {
    return m_data.m_position_deg;
}

void ServoSim::setMaxVelocity(float maxVelocity_deg_s) {
    m_cmd.m_max_velocity_deg_s = maxVelocity_deg_s;
}

void ServoSim::update(float deltaTime_ms) {
    float positionError_deg = m_cmd.m_position_deg - m_data.m_position_deg;
    float max_step_deg = m_cmd.m_max_velocity_deg_s * (deltaTime_ms / 1000.0);

    // Plan command
    float positionCommand_deg;
    if (positionError_deg > max_step_deg) {
        positionCommand_deg = m_data.m_position_deg + max_step_deg; 
    } else if (positionError_deg < -max_step_deg) {
        positionCommand_deg = m_data.m_position_deg - max_step_deg;
    } else {
        positionCommand_deg = m_cmd.m_position_deg;
    }

    // Validate command
    if (positionCommand_deg > m_cmd.m_maxAngle_deg || positionCommand_deg < m_cmd.m_minAngle_deg) {
        // Illegal joint position, don't progress forward
        positionCommand_deg = m_data.m_position_deg;
    }

    // Write command to motor
    m_data.m_position_deg = positionCommand_deg;
}

