#ifndef DATABASE_MANAGER_HPP
#define DATABASE_MANAGER_HPP

#include <string>
#include <memory>
#include <mutex>

class DatabaseConnection; // Forward declaration

class DatabaseManager {
public:
    static DatabaseManager& getInstance();
    std::shared_ptr<DatabaseConnection> getConnection();
    void setConnectionParams(const std::string& host, const std::string& user, const std::string& password, const std::string& database);

private:
    DatabaseManager() = default;
    ~DatabaseManager() = default;
    DatabaseManager(const DatabaseManager&) = delete;
    DatabaseManager& operator=(const DatabaseManager&) = delete;

    std::shared_ptr<DatabaseConnection> createConnection();

    std::string host_;
    std::string user_;
    std::string password_;
    std::string database_;
    std::shared_ptr<DatabaseConnection> connection_;
    std::mutex mutex_;
};

#endif // DATABASE_MANAGER_HPP