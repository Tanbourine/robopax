#include "StepSequencer.h"
#include "../../common/logger/Logger.h"

StepSequencer::StepSequencer(Logger& logger): m_steps(), m_currentStepIdx(0), m_logger(logger) {};

void StepSequencer::evaluatePermissives()
{
    if (m_steps.size() == 0)
    {
        return;
    }

    Step& currentStep = m_steps[m_currentStepIdx];
    bool result = currentStep.evaluatePermissive();
    if (result)
    {
        advanceStep();
    }
};

void StepSequencer::advanceStep()
{
    if (m_steps.size() < m_currentStepIdx+1)
    {
        m_logger.log([this](std::stringstream& ss) { ss << "Skipping advancing step bc at the end: " << m_steps[m_currentStepIdx].getDescription(); });
        return;
    }
    m_logger.log([this](std::stringstream& ss) { ss << "Advanced step from " << m_steps[m_currentStepIdx].getDescription() << " to " << m_steps[m_currentStepIdx+1].getDescription(); });
    m_currentStepIdx++;
};

bool StepSequencer::hasFinished()
{
    return m_currentStepIdx >= m_steps.size();
};

void StepSequencer::addStep(Step step)
{
    m_steps.push_back(step);
    m_logger.log([&step](std::stringstream& ss) { ss << "Added step: " << step.getDescription(); });
};

void StepSequencer::evaluate()
{
    Step currentStep = m_steps[m_currentStepIdx];
    currentStep.update();
};

void StepSequencer::reset()
{
    m_currentStepIdx = 0;
};
