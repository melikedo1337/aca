#include "animal.h"

Animal::Animal() {}

Animal::~Animal() {}

void Animal::voice() const {
    std::cout << "Animal: ???" << std::endl;
}
