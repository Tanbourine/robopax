#include <iostream>
#include <chrono>
#include <thread>
#include "servos/ServoSim.h"
#include "state_machine/servos/servo_idle/ServoIdle.h"
#include "state_machine/servos/position_control/PositionControl.h"
#include "state_machine/servos/AbortState.h"
#include "state_machine/StateMachine.h"
#include "common/logger/ConsoleLogger.h"
#include "servos/models/ServoData.h"
#include "servos/models/ServoCmd.h"

int main() {

    ConsoleLogger logger;
    logger.log("Hello World!");

    // Initialize hardware
    ServoData motorData;
    ServoCmd motorCmd;
    motorCmd.m_max_velocity_deg_s = 30.0;

    ServoSim motor(motorData, motorCmd);

    // Initialize States
    ServoIdleData  motorIdleData(motorData);
    ServoIdle idleState(logger, motorIdleData, motor);
    PositionControl positionControlState(logger, motor);
    AbortState abortState(logger, motor);

    StateMachine sm(logger, "Test State Machine", idleState, abortState);
    sm.init();

    sm.registerState(positionControlState);

    float secondsToSimulate = 10.0;
    int deltaMs = 100;
    int numSteps = (secondsToSimulate * 1000) / deltaMs;

    for(int i = 0; i < numSteps; i++) {

        sm.update(deltaMs);

        std::this_thread::sleep_for(std::chrono::milliseconds(deltaMs));
    }

    return 0;
}
