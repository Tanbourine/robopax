#include <iostream>
#include <chrono>
#include <thread>
#include "motors/MotorSim.h"
#include "state_machine/motors/motor_idle/MotorIdle.h"
#include "state_machine/motors/motor_position_control/MotorPositionControl.h"
#include "state_machine/StateMachine.h"
#include "common/logger/ConsoleLogger.h"

int main() {

    ConsoleLogger logger;
    logger.log("Hello World!");

    MotorData motorData;
    MotorSim motor(motorData);
    MotorIdleData  motorIdleData(motorData);
    MotorIdle idleState(logger, motorIdleData);
    MotorPositionControl positionControlState(logger);

    StateMachine sm(logger, "Test State Machine", idleState);
    sm.init();

    sm.registerState(positionControlState);


    // MotorSim sim;
    // sim.init();
    // sim.setControlMode(ControlMode::POSITION);
    // sim.setDesiredPosition(45.0f);
    // sim.setMaxVelocity(15.0f);

    float secondsToSimulate = 0.5;
    int deltaMs = 100;
    int numSteps = (secondsToSimulate * 1000) / deltaMs;

    for(int i = 0; i < numSteps; i++) {

        sm.update(deltaMs);

        // sim.update(deltaMs / 1000.0);  // 100 ms

        // if (i > 50) {
        //     sim.setDesiredPosition(0.0);
        // }
        // std::cout << "Iteration " << i 
        //           << ": Position=" << sim.getActualPosition() 
        //         << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(deltaMs));
    }

    return 0;
}
