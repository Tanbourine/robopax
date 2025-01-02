#include <iostream>
#include "StateUtils.h"


std::string StateUtils::toString(StateEnum stateEnum) {
    switch (stateEnum) {
        case StateEnum::ABORTED: return "Aborted";
        case StateEnum::ABORTING: return "Aborting";
        case StateEnum::INVALID: return "Invalid";
        case StateEnum::UNSET: return "Unset";
        case StateEnum::INIT: return "Init";
        case StateEnum::IDLE: return "Idle";
        case StateEnum::POSITION_CONTROL: return "Position Control";
        default: return "UNKNOWN";
    }
}