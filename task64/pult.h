#pragma once

class Pult {
public:
    virtual ~Pult() = default;

    virtual void turnOn() = 0;
    virtual void turnOff() = 0;
    virtual void volumeUp() = 0;
    virtual void volumeDown() = 0;
    virtual void nextChannel() = 0;
    virtual void prevChannel() = 0;
    virtual void mute() = 0;
};
