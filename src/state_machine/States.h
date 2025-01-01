#pragma once

enum class StateEnum {
    INVALID = -1,
    UNSET = 0,
    MOTOR_IDLE = 1,
    MOTOR_POSITION_CONTROL = 2

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