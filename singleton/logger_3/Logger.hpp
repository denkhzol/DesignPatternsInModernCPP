#ifndef LOGGER_HPP
#define LOGGER_HPP

#include <fstream>
#include <memory>
#include <mutex>
#include <string>

class Logger {
private:
    static std::unique_ptr<Logger> instance;
    std::ofstream logFile;
    std::mutex logMutex;

public:
    Logger();
    
    static Logger& getInstance();
    void log(const std::string& message);

    // Delete copy constructor and assignment operator
    Logger(const Logger&) = delete;
    Logger& operator=(const Logger&) = delete;

    ~Logger();
};

#endif // LOGGER_HPP
