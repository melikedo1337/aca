#include "cat.h"
#include <iostream>

Cat::Cat() {}

Cat::~Cat() {}

void Cat::voice() const {
    std::cout << "Cat: Meow!" << std::endl;
}
