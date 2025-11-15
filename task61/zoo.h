#pragma once

#include "animal.h"

class Zoo {
private:
    Animal** arr;
    int size;
    int capacity;

public:
    Zoo(int cap = 10);
    ~Zoo();

    void add(Animal* a);
    void makeVoices() const;
};