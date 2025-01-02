

#include "ServoControllerComponent.h"
#include "models/ServoData.h"
#include "models/ServoCmd.h"
#include <string>
#include "../../common/logger/Logger.h"

class ServoSim : public ServoControllerComponent{
public:
    ServoSim(Logger& logger, const std::string& name);

    void init() override;
    void setEnable(bool enable) override;
    void setDesiredPositionDeg(float position) override;
    void setMaxVelocityDegPerSec(float maxVelocity_deg_s) override;
    void setAngleLimits(float minAngleDeg, float maxAngleDeg) override;
    void read(int deltaTime_ms) override;
    void write(int deltaTime_ms) override;

    float getActualPosition() const override;

protected:

private:
    Logger& m_logger;
    float getMaxStepDeg(int deltaTime_ms);
    float planNextStep(float maxStepDeg);
};
