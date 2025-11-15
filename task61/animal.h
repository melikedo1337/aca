#pragma once

#include <iostream>

class Animal {
public:
    Animal();
    virtual ~Animal();

    virtual void voice() const; 
};
