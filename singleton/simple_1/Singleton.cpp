#include "Singleton.hpp"

Singleton* Singleton::instance = nullptr;

Singleton* Singleton::getInstance() {
    if (instance == nullptr) {
        instance = new Singleton();
    }
    return instance;
}

void Singleton::someBusinessLogic(){
    //...
}