#include "DatabaseManager.hpp"
#include <stdexcept>

// Assume we have a DatabaseConnection class implementation
class DatabaseConnection {
public:
    DatabaseConnection(const std::string& host, const std::string& user, const std::string& password, const std::string& database) {
        // Implementation of database connection
    }
    // Other methods...
};

DatabaseManager& DatabaseManager::getInstance() {
    static DatabaseManager instance;
    return instance;
}

std::shared_ptr<DatabaseConnection> DatabaseManager::getConnection() {
    std::lock_guard<std::mutex> lock(mutex_);
    if (!connection_) {
        connection_ = createConnection();
    }
    return connection_;
}

void DatabaseManager::setConnectionParams(const std::string& host, const std::string& user, const std::string& password, const std::string& database) {
    std::lock_guard<std::mutex> lock(mutex_);
    host_ = host;
    user_ = user;
    password_ = password;
    database_ = database;
    connection_.reset(); // Reset the connection so it will be recreated with new parameters
}

std::shared_ptr<DatabaseConnection> DatabaseManager::createConnection() {
    if (host_.empty() || user_.empty() || database_.empty()) {
        throw std::runtime_error("Database connection parameters not set");
    }
    return std::make_shared<DatabaseConnection>(host_, user_, password_, database_);
}