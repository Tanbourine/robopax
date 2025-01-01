#include "../models/MotorData.h"

class MotorIdleData {
public:
    // MotorIdleData()
    // {
    //     MotorData newData;
    //     m_motor = newData;
    // }

    MotorIdleData(MotorData motor)
    {
        m_motor = motor;
    }

    MotorData m_motor;
};