#include <chrono>
#include <iomanip>
#include <sstream>
#include "Logger.h"

Logger::Logger() {};

void Logger::log(const std::string& message)
{
    // Format
    // Add timestamp
    using namespace std::chrono;
    auto now = system_clock::now();
    auto in_time_t = system_clock::to_time_t(now);

    // Build [YYYY-MM-DD HH:MM:SS][functionName] message
    std::stringstream ss;
    ss << "[" << std::put_time(std::localtime(&in_time_t), "%Y-%m-%d %X") << "] ";
    ss << message;

    logInternal(ss.str());
}