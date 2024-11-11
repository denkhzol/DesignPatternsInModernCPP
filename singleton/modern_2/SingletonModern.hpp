#ifndef SINGLETONMODERN_HPP
#define SINGLETONMODERN_HPP

#include <memory>

class SingletonModern {
private:
    static std::unique_ptr<SingletonModern> instance;

public:
    SingletonModern() {}

    static SingletonModern& getInstance();

    // Delete copy constructor and assignment operator
    SingletonModern(const SingletonModern&) = delete;
    SingletonModern& operator=(const SingletonModern&) = delete;

    void someBusinessLogic();
};

#endif // SINGLETONMODERN_HPP
