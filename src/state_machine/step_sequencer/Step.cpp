
#include "Step.h"
#include <string>
#include <functional>
#include "../Permissive.h"

Step::Step(std::string description, std::function<void()> updateFunc, Permissive permissive) :
    m_description(description), m_permissive(permissive), m_updateFunc(updateFunc)
{

}

bool Step::evaluatePermissive()
{
    return m_permissive.evaluate();
}

void Step::update()
{
    m_updateFunc();
}

std::string Step::getDescription()
{
    return m_description;
}