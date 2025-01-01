#pragma once

#include "ServoController.h"
#include "models/ServoData.h"
#include "models/ServoCmd.h"

class ServoSim : public ServoController {
public:
    ServoSim(ServoData& data, ServoCmd& cmd);

    void init() override;
    void setDesiredPosition(float position) override;
    void setMaxVelocity(float maxVelocity_deg_s) override;
    void update(float deltaTime_ms) override;

    float getActualPosition() const override;

protected:

private:
    ServoData& m_data;
    ServoCmd& m_cmd;
};
