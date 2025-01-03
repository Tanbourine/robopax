#pragma once
#include <vector>
#include <functional>
#include <string>
#include "../Permissive.h"

class Step {
public:
    Step(std::string description, std::function<void()> updateFunc, Permissive permissive);
    bool evaluatePermissive();
    void update();
    std::string getDescription();

private:
    std::string m_description;
    Permissive m_permissive;
    std::function<void()> m_updateFunc;
};