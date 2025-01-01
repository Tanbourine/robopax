#include <iostream>
#include "StateUtils.h"


std::string StateUtils::toString(StateEnum stateEnum) {
    switch (stateEnum) {
        case StateEnum::INVALID: return "Invalid";
        case StateEnum::UNSET: return "Unset";
        case StateEnum::MOTOR_IDLE: return "Motor Idle";
        case StateEnum::MOTOR_POSITION_CONTROL: return "Motor Position Control";
        default: return "Invalid";
    }
}