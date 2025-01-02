#pragma once

enum class StateEnum {
    ABORTED,
    ABORTING,
    INVALID,
    UNSET,
    INIT,
    IDLE,
    POSITION_CONTROL

};

// static std::string toString(StateEnum state) {
//     switch (state) {
//         case StateEnum::INVALID: return "Invalid";
//         case StateEnum::UNSET: return "Unset";
//         case StateEnum::MOTOR_IDLE: return "Motor Idle";
//         case StateEnum::MOTOR_POSITION_CONTROL: return "Motor Position Control";
//         default: return "Invalid";
//     }
// }