/*
Configuration Manager Singleton
This example demonstrates a configuration manager using the Singleton pattern, 
which can load configuration from a file and provide access to configuration values throughout the application.
*/


#include <iostream>
#include "ConfigManager.hpp"

int main() {
    try {
        ConfigManager& configManager = ConfigManager::getInstance();
        configManager.loadConfig("config.txt");

        std::cout << "Database host: " << configManager.getValue("db_host") << std::endl;
        std::cout << "Database user: " << configManager.getValue("db_user") << std::endl;

        // Update a configuration value
        configManager.setValue("log_level", "DEBUG");
        std::cout << "Log level: " << configManager.getValue("log_level") << std::endl;

    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}