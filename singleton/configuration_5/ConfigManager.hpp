#ifndef CONFIG_MANAGER_HPP
#define CONFIG_MANAGER_HPP

#include <string>
#include <unordered_map>
#include <mutex>

class ConfigManager {
public:
    static ConfigManager& getInstance();
    void loadConfig(const std::string& filename);
    std::string getValue(const std::string& key) const;
    void setValue(const std::string& key, const std::string& value);

private:
    ConfigManager() = default;
    ~ConfigManager() = default;
    ConfigManager(const ConfigManager&) = delete;
    ConfigManager& operator=(const ConfigManager&) = delete;

    std::unordered_map<std::string, std::string> config_;
    mutable std::mutex mutex_;
};

#endif // CONFIG_MANAGER_HPP