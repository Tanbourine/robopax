#include "MotorSim.h"

MotorSim::MotorSim(MotorData data)
: m_data(data),
  m_mode(ControlMode::POSITION),
  m_desiredPosition_deg(0.0f),
  m_actualPosition_deg(0.0f),
  m_maxVelocity_deg_s(10.0f),
  m_jointMin_deg(0.0f),
  m_jointMax_deg(270.0f),
  MotorController(data)
{ }

void MotorSim::init() {
    // Any initialization logic for the simulation
}

void MotorSim::setControlMode(ControlMode mode) {
    m_mode = mode;
}

void MotorSim::setDesiredPosition(float position) {
    m_desiredPosition_deg = position;
}

float MotorSim::getActualPosition() const {
    return m_actualPosition_deg;
}

void MotorSim::setMaxVelocity(float maxVelocity_deg_s) {
    m_maxVelocity_deg_s = maxVelocity_deg_s; 
}

void MotorSim::update(float deltaTime_s) {
    float positionError_deg = m_desiredPosition_deg - m_actualPosition_deg;
    float max_step_deg = m_maxVelocity_deg_s * deltaTime_s;

    // Plan command
    float positionCommand_deg;
    if (positionError_deg > max_step_deg) {
        positionCommand_deg = m_actualPosition_deg + max_step_deg; 
    } else if (positionError_deg < -max_step_deg) {
        positionCommand_deg = m_actualPosition_deg - max_step_deg;
    } else {
        positionCommand_deg = m_desiredPosition_deg;
    }

    // Validate command
    if (positionCommand_deg > m_jointMax_deg || positionCommand_deg < m_jointMin_deg) {
        // Illegal joint position, don't progress forward
        positionCommand_deg = m_actualPosition_deg;
    }

    // Write command to motor
    m_actualPosition_deg = positionCommand_deg;
}

