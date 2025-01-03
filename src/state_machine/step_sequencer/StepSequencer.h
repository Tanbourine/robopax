#pragma once

#include <string>
#include <vector>
#include "Step.h"
#include "../../common/logger/Logger.h"
#include <memory>

class StepSequencer {
public:
    StepSequencer(Logger& logger);
    void addStep(Step step);
    bool hasFinished();
    void update();
    Step& getStep(int idx);
    void reset();

private:
    Logger& m_logger;
    int m_currentStepIdx;
    void advanceStep();
    void evaluatePermissives();
    std::vector<std::shared_ptr<Step>> m_steps;

};