#include "car.h"
#include <iostream>

Car::Car() 
: m_model("Unknown")
, m_engine() 
{}

Car::Car(const std::string& model, const Engine& engine) 
: m_model(model)
, m_engine(engine) 
{}

Car::~Car() {}

void Car::drive() const {
    m_engine.sound();
    std::cout << "The " << m_model << " is driving!" << std::endl;
}

std::string Car::getModel() const {
    return m_model;
}

Engine Car::getEngine() const {
    return m_engine;
}

void Car::setModel(const std::string& model) {
    m_model = model;
}

void Car::setEngine(const Engine& engine) {
    m_engine = engine;
}

Car::Car(const Car& other)
    : m_model(other.m_model)
    , m_engine(other.m_engine) 
    {}

Car& Car::operator=(const Car& other) {
    if (this != &other) {
        m_model = other.m_model;
        m_engine = other.m_engine;
    }
    return *this;
}
