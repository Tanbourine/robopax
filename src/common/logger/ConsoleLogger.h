#pragma once

#include "Logger.h"
#include <iostream>

class ConsoleLogger : public Logger {
public:
    ConsoleLogger();
    void logInternal(const std::string& message) override;
};