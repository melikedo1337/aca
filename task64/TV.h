#pragma once
#include <iostream>
#include "pult.h"

class TV : public Pult {
    int m_volume;
    int m_channel;
    bool m_on;

public:
    TV();

    void turnOn() override;
    void turnOff() override;
    void volumeUp() override;
    void volumeDown() override;
    void nextChannel() override;
    void prevChannel() override;
    void mute() override;
};
