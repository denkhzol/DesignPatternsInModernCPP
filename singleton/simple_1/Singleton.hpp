#ifndef SINGLETON_HPP
#define SINGLETON_HPP

class Singleton {
private:
    static Singleton* instance;
    Singleton() {} // Private constructor

public:
    static Singleton* getInstance();

    void someBusinessLogic();
};

#endif // SINGLETON_HPP
