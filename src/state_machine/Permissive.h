#pragma once

#include <string>
#include <functional>

class Permissive {
public:
    Permissive(std::function<bool()> permissiveFunc, std::string description):
    m_permissiveFunc(permissiveFunc),
    m_description(description)
    {};

    bool evaluate()
    {
        return m_permissiveFunc();
    };

    std::string getDescription()
    {
        return m_description;
    }

private:
    std::function<bool()> m_permissiveFunc;
    std::string m_description;
    

};