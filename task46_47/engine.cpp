#include "engine.h"
#include <iostream>

Engine::Engine() 
    : m_horsepower(0)
    , m_type("undefined") 
    {}
    
Engine::Engine(int horsepower, const std::string& type) 
    : m_horsepower(horsepower)
    , m_type(type) 
    {}
    
Engine::~Engine() {}

void Engine::sound() const {
    std::cout << "Vroom Vroom!" << std::endl;
}

int Engine::getHorsepower() const {
    return m_horsepower;
}

std::string Engine::getType() const {
    return m_type;
}

void Engine::setHorsepower(int horsepower) {
    m_horsepower = horsepower;
}

void Engine::setType(const std::string& type) {
    m_type = type;
}

