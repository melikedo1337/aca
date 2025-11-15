#include "dog.h"
#include <iostream>

Dog::Dog() {}

Dog::~Dog() {}

void Dog::voice() const {
    std::cout << "Dog: Woof!" << std::endl;
}
