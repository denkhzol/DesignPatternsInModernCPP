#include <iostream>
#include "SingletonModern.hpp"

int main() {
    SingletonModern& s1 = SingletonModern::getInstance();
    SingletonModern& s2 = SingletonModern::getInstance();

    if (&s1 == &s2) {
        std::cout << "Both instances are the same." << std::endl;
    } else {
        std::cout << "Instances are different." << std::endl;
    }

    return 0;
}
