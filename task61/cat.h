#pragma once

#include "animal.h"

class Cat : public Animal {
public:
    Cat();
    ~Cat();
    void voice() const override;
};
