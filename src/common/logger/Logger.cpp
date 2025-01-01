#include <chrono>
#include <iomanip>
#include <sstream>
#include "Logger.h"

Logger::Logger() {};

void Logger::log(const std::string& message, LogLevel logLevel)
{
    // Format
    // Add timestamp
    using namespace std::chrono;
    auto now = system_clock::now();
    auto in_time_t = system_clock::to_time_t(now);

    // Build [YYYY-MM-DD HH:MM:SS][functionName] message
    std::stringstream ss;
    ss << "[" << std::put_time(std::localtime(&in_time_t), "%Y-%m-%d %X") << "] ";
    ss << "[" << logLevelToString(logLevel) << "] ";
    ss << message;

    output(ss.str());
}

std::string Logger::logLevelToString(LogLevel& logLevel)
{
    switch (logLevel) {
        case LogLevel::DEBUG: return "DEBUG";
        case LogLevel::INFO: return "INFO";
        case LogLevel:: WARN: return "WARN";
        case LogLevel:: ERROR: return "ERROR";
        case LogLevel:: FATAL: return "FATAL";
        default: return "INFO";
    }
}

void Logger::log(const std::function<void(std::stringstream&)> stringLambda, LogLevel logLevel)
{
    std::stringstream ss;
    stringLambda(ss);
    log(ss.str(), logLevel);
}