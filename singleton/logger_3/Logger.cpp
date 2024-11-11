#include <iostream>
#include "Logger.hpp"

std::unique_ptr<Logger> Logger::instance;

Logger::Logger() {
    logFile.open("log.txt", std::ios::app);
}

Logger::~Logger() {
    if (logFile.is_open()) {
        logFile.close();
    }
}

Logger& Logger::getInstance() {
    if(instance == nullptr){
        instance = std::make_unique<Logger>();
    }
    return *instance;
}

void Logger::log(const std::string& message) {
    std::lock_guard<std::mutex> guard(logMutex);
    logFile << message << std::endl;
    std::cout << "'" << message << "' was written into the log file successfully." << std::endl;
}
