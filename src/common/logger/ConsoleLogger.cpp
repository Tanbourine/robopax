#include "ConsoleLogger.h"

ConsoleLogger::ConsoleLogger() {};

void ConsoleLogger::logInternal(const std::string& message) {
    // Log to std::cout
    std::cout << message << std::endl;
}
