#pragma once

#include "Logger.h"
#include <iostream>

class ConsoleLogger : public Logger {
public:
    ConsoleLogger();
    void output(const std::string& message) override;
};