
#include "Step.h"
#include <string>
#include <functional>

Step::Step(std::string description, std::function<void()> updateFunc, std::function<bool()> stepPermissive) :
    m_description(description), m_stepPermissive(stepPermissive), m_updateFunc(updateFunc)
{

}

bool Step::evaluatePermissive()
{
    return m_stepPermissive();
}

void Step::update()
{
    m_updateFunc();
}

std::string Step::getDescription()
{
    return m_description;
}