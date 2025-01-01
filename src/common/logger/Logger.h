#pragma once

#include <string>

class Logger {
public:
    Logger();
    // virtual ~Logger() = default;
    void log(const std::string& message);

protected:
    virtual void logInternal(const std::string& message) = 0;
};