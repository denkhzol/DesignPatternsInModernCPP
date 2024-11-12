/*
Database Connection Manager Singleton
This example shows a more robust database connection manager using the Singleton pattern.
*/

#include <iostream>
#include "DatabaseManager.hpp"

int main() {
    try {
        DatabaseManager& dbManager = DatabaseManager::getInstance();
        dbManager.setConnectionParams("localhost", "user", "password", "mydb");

        auto connection1 = dbManager.getConnection();
        auto connection2 = dbManager.getConnection();

        std::cout << "Connection 1 and 2 are " 
                  << (connection1 == connection2 ? "the same" : "different") 
                  << std::endl;

        // Use the connection...

    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}