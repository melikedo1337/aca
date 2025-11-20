#include <iostream>
#include "TV.h"

int main() {
    Pult* pult = new TV();

    pult->turnOn();
    pult->volumeUp();
    pult->volumeUp();
    pult->nextChannel();
    pult->prevChannel();
    pult->mute();
    pult->turnOff();

    delete pult;
    return 0;
}
