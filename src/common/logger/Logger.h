#pragma once

#include <string>
#include <sstream>
#include <functional>

enum class LogLevel {
    DEBUG, INFO, WARN, ERROR, FATAL
};

class Logger {
public:
    Logger();
    // virtual ~Logger() = default;
    void log(const std::string& message, LogLevel logLevel=LogLevel::INFO);

    void log(std::function<void(std::stringstream&)> stringLambda, LogLevel logLevel=LogLevel::INFO);

    std::string logLevelToString(LogLevel& loglevel);

protected:
    virtual void output(const std::string& message) = 0;
};