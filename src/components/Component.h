#pragma once

#include <string>


class Component {

public:
    Component(const std::string& name): m_name(name) {};
    std::string getName();

    virtual void read(int deltaTimeMs) = 0;
    virtual void write(int deltaTimeMs) = 0;

private:
    std::string m_name;
};