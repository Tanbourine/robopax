#include <iostream>
#include <chrono>
#include <thread>
#include "components/servos/ServoSim.h"
#include "state_machine/servos/servo_init/ServoInit.h"
#include "state_machine/servos/servo_idle/ServoIdle.h"
#include "state_machine/servos/position_control/PositionControl.h"
#include "state_machine/servos/AbortState.h"
#include "state_machine/StateMachine.h"
#include "common/logger/ConsoleLogger.h"
#include "components/servos/models/ServoData.h"
#include "components/servos/models/ServoCmd.h"
#include <memory>
#include "components/component_manager/ComponentManager.h"

int main() {

    ConsoleLogger logger;
    logger.log("Hello World!");



    // Initialize hardware
    ServoSim motor(logger, "Motor1");

    ComponentManager componentManager(logger);
    componentManager.registerComponent(motor);

    // Initialize States
    ServoInit initState(logger, motor);
    ServoIdle idleState(logger, motor);
    PositionControl positionControlState(logger, motor);
    AbortState abortState(logger, motor);

    StateMachine sm(logger, "Test State Machine", initState, abortState, componentManager);

    sm.registerState(positionControlState);
    sm.registerState(idleState);

    sm.init();

    float secondsToSimulate = 10.0;
    int deltaMs = 100;
    int numSteps = (secondsToSimulate * 1000) / deltaMs;

    for(int i = 0; i < numSteps; i++) {

        sm.update(deltaMs);

        std::this_thread::sleep_for(std::chrono::milliseconds(deltaMs));
    }

    return 0;
}
