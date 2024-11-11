#include "SingletonModern.hpp"

std::unique_ptr<SingletonModern> SingletonModern::instance;

SingletonModern& SingletonModern::getInstance() {
    if(instance == nullptr){
        instance = std::make_unique<SingletonModern>();
    }

    return *instance;
}

void SingletonModern::someBusinessLogic(){
    //...
}
