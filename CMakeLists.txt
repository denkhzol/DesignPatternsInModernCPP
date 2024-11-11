cmake_minimum_required(VERSION 3.10)

# Set the project name
project(DesignPatternsInModernCPP)

# C++ standard
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

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

# Add the source files to SOURCES_SINGLETON_MODERN
set(SOURCES_SINGLETON_LOGGER
    singleton/logger_3/Logger.cpp
    singleton/logger_3/main.cpp
)
# executable for the main application
add_executable(singletonLoggerApp ${SOURCES_SINGLETON_LOGGER})

# # Add the source files to TEST_SOURCES_POINTER
# set(TEST_SOURCES_POINTER
#     BankAccount.cpp
#     BankAccountPointerTest_2.cpp
# )

# # Add the source files to TEST_SOURCES_SMART_POINTER
# set(TEST_SOURCES_SMART_POINTER
#     BankAccount.cpp
#     BankAccountSmartPointerTest_3.cpp
# )

# # Add the source files to TEST_SOURCES_SMART_POINTER_PARAMETERIZED
# set(TEST_SOURCES_SMART_POINTER_PARAMETERIZED
#     BankAccount.cpp
#     BankAccountSmartPointerParameterizedTest_4.cpp
# )




# add_executable(unitTestPointer ${TEST_SOURCES_POINTER})
# # Link the GoogleTest libraries
# target_link_libraries(unitTestPointer ${GTEST_LIBRARIES} pthread)

# add_executable(unitTestSmartPointer ${TEST_SOURCES_SMART_POINTER})
# # Link the GoogleTest libraries
# target_link_libraries(unitTestSmartPointer ${GTEST_LIBRARIES} pthread)

# add_executable(unitTestParameterized ${TEST_SOURCES_SMART_POINTER_PARAMETERIZED})
# # Link the GoogleTest libraries
# target_link_libraries(unitTestParameterized ${GTEST_LIBRARIES} pthread)
