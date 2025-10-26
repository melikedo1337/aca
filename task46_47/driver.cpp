#include "driver.h"
#include <iostream>

Driver::Driver() 
    : m_name("Unknown")
    , m_experience(0) 
    {}

Driver::Driver(const std::string& name, int experience) 
    : m_name(name)
    , m_experience(experience) 
    {}
    
Driver::~Driver() 
        {}

        
void Driver::driveCar(const Car& car) const {
    std::cout << m_name << " is driving the car:" << std::endl;
    car.drive();
}

std::string Driver::getName() const {
    return m_name;
}

int Driver::getExperience() const {
    return m_experience;
}

void Driver::setName(const std::string& name) {
    m_name = name;
}

void Driver::setExperience(int experience) {
    m_experience = experience;
}

Driver::Driver(const Driver& other)
    : m_name(other.m_name)
    , m_experience(other.m_experience)
    {}

Driver& Driver::operator=(const Driver& other) {
    if (this != &other) {
        m_name = other.m_name;
        m_experience = other.m_experience;
    }
    return *this;
}


