#include "TV.h"

TV::TV()
    : m_volume(10)
    , m_channel(1)
    , m_on(false)
{}


void TV::turnOn() {
    m_on = true;
    std::cout << "TV is ON\n";
}

void TV::turnOff() {
    m_on = false;
    std::cout << "TV is OFF\n";
}

void TV::volumeUp() {
    if (m_on) {
        m_volume++;
        std::cout << "Volume: " << m_volume << "\n";
    }
}

void TV::volumeDown() {
    if (m_on) {
        m_volume--;
        std::cout << "Volume: " << m_volume << "\n";
    }
}

void TV::nextChannel() {
    if (m_on) {
        m_channel++;
        std::cout << "Channel: " << m_channel << "\n";
    }
}

void TV::prevChannel() {
    if (m_on) {
        m_channel--;
        std::cout << "Channel: " << m_channel << "\n";
    }
}

void TV::mute() {
    std::cout << "Muted\n";
}
