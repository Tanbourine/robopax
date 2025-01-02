#include "ServoSim.h"
#include <string>
#include "../Component.h"

ServoSim::ServoSim(Logger& logger, const std::string& name, ServoData& data, ServoCmd& cmd): m_logger(logger), ServoControllerComponent(name, data, cmd)
{ }

void ServoSim::init() {
    // Any initialization logic for the simulation
}


void ServoSim::setDesiredPositionDeg(float position) {
    m_cmd.m_position_deg = position;
}

float ServoSim::getActualPosition() const {
    return m_data.m_position_deg;
}

void ServoSim::setEnable(bool enable) {
    m_cmd.m_enable = enable;
}

void ServoSim::setAngleLimits(float minAngleDeg, float maxAngleDeg) {
    m_cmd.m_minAngle_deg = minAngleDeg;
    m_cmd.m_maxAngle_deg = maxAngleDeg;
    m_logger.log([this](std::stringstream& ss) { ss << "Set angle limits to (" << m_cmd.m_minAngle_deg << ", " << m_cmd.m_maxAngle_deg << ")"; });
}

void ServoSim::setMaxVelocityDegPerSec(float maxVelocity_deg_s) {
    m_cmd.m_max_velocity_deg_s = maxVelocity_deg_s;
    m_logger.log([this](std::stringstream& ss) {ss << "Set max velocity to: " << m_cmd.m_max_velocity_deg_s; });
}

void ServoSim::read(int deltaTime_ms) {
    // const std::string componentName = Component::getName();
    const std::string componentName = "Motor 1";
    m_logger.log([this, &componentName](std::stringstream& ss) { ss << componentName << " position is " << m_data.m_position_deg;});
};

void ServoSim::write(int deltaTime_ms) {
    float positionError_deg = m_cmd.m_position_deg - m_data.m_position_deg;
    float maxStepDeg = getMaxStepDeg(deltaTime_ms);
    float nextStepDeg = planNextStep(maxStepDeg);

    // Short circuit read and immediately write into the read register
    // m_logger.log([&nextStepDeg](std::stringstream& ss) { ss << "Wrote command " << nextStepDeg;});
    m_data.m_position_deg = nextStepDeg;
}

float ServoSim::getMaxStepDeg(int deltaTime_ms) {
    // m_logger.log([this, &deltaTime_ms](std::stringstream& ss) { ss << "Max Velocity: " << m_cmd.m_max_velocity_deg_s << " || Delta time " << deltaTime_ms;});
    return m_cmd.m_max_velocity_deg_s * (deltaTime_ms / 1000.0);
};

float ServoSim::planNextStep(float maxStepDeg) {
    float positionError_deg = m_cmd.m_position_deg - m_data.m_position_deg;

    float nextStep_deg;
    if (positionError_deg > maxStepDeg) {
        nextStep_deg = m_data.m_position_deg + maxStepDeg; 
    } else if (positionError_deg < -maxStepDeg) {
        nextStep_deg = m_data.m_position_deg - maxStepDeg;
    } else {
        nextStep_deg = m_cmd.m_position_deg;
    }

    if (nextStep_deg > m_cmd.m_maxAngle_deg || nextStep_deg < m_cmd.m_minAngle_deg) {
        // Illegal joint position, don't progress forward
        nextStep_deg = m_data.m_position_deg;
    }

    // m_logger.log([this, &positionError_deg, &maxStepDeg, &nextStep_deg](std::stringstream& ss) { ss << "Current Position: " << m_data.m_position_deg << " || Commanded Position: " << m_cmd.m_position_deg << " || Error: " << positionError_deg << " || Max Step: " << maxStepDeg << " || Next Step: " << nextStep_deg;});

    return nextStep_deg;
}

