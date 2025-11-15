#include "zoo.h"

Zoo::Zoo(int cap)
    : size(0)
    , capacity(cap)
{
    arr = new Animal*[capacity];
}

Zoo::~Zoo() {
    for (int i = 0; i < size; i++)
        delete arr[i];
    delete[] arr;
}

void Zoo::add(Animal* a) {
    if (size == capacity) return; 
    arr[size++] = a;
}

void Zoo::makeVoices() const {
    for (int i = 0; i < size; i++)
        arr[i] -> voice();
}
