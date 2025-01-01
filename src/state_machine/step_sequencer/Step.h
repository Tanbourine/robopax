#pragma once
#include <vector>
#include <functional>
#include <string>

class Step {
public:
    Step(std::string description, std::function<void()> updateFunc, std::function<bool()> stepPermissive);
    bool evaluatePermissive();
    void update();
    std::string getDescription();

private:
    std::string m_description;
    std::function<bool()> m_stepPermissive;
    std::function<void()> m_updateFunc;
};