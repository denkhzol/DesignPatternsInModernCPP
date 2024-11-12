cmake_minimum_required(VERSION 3.10)

# Set the project name
project(DesignPatternsInModernCPP)

# C++ standard
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# SINGLETON - START
# Add the source files to SOURCES_SINGLETON_SIMPLE
set(SOURCES_SINGLETON_SIMPLE
    singleton/simple_1/Singleton.cpp
    singleton/simple_1/main.cpp
)
# executable for the main application
add_executable(singletonSimpleApp ${SOURCES_SINGLETON_SIMPLE})

# Add the source files to SOURCES_SINGLETON_MODERN
set(SOURCES_SINGLETON_MODERN
    singleton/modern_2/SingletonModern.cpp
    singleton/modern_2/main.cpp
)
# executable for the main application
add_executable(singletonModernApp ${SOURCES_SINGLETON_MODERN})

# Add the source files to SOURCES_SINGLETON_LOGGER
set(SOURCES_SINGLETON_LOGGER
    singleton/logger_3/Logger.cpp
    singleton/logger_3/main.cpp
)
# executable for the main application
add_executable(singletonLoggerApp ${SOURCES_SINGLETON_LOGGER})

# Add the source files to SOURCES_SINGLETON_DATABASE
set(SOURCES_SINGLETON_DATABASE
    singleton/database_4/DatabaseManager.cpp
    singleton/database_4/main.cpp
)
# executable for the main application
add_executable(singletonDatabaseApp ${SOURCES_SINGLETON_DATABASE})

# Add the source files to SOURCES_SINGLETON_CONFIGURATION
set(SOURCES_SINGLETON_CONFIGURATION
    singleton/configuration_5/ConfigManager.cpp
    singleton/configuration_5/main.cpp
)
# executable for the main application
add_executable(singletonConfigApp ${SOURCES_SINGLETON_CONFIGURATION})

# SINGLETON - END
