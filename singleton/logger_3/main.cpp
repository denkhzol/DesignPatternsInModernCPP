#include <iostream>
#include "Logger.hpp"

int main() {
    Logger& logger = Logger::getInstance();
    logger.log("This is a log message.");

    Logger& logger2 = Logger::getInstance();
    logger2.log("This is another log message.");

    if (&logger == &logger2) {
        std::cout << "Both instances are the same." << std::endl;
    } else {
        std::cout << "Instances are different." << std::endl;
    }

    return 0;
}
