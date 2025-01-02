#include "../../../components/servos/models/ServoData.h"

class ServoIdleData {
public:


    ServoIdleData(ServoData motor)
    {
        m_motor = motor;
    }

    ServoData m_motor;
};