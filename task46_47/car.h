#pragma once
#include <string>
#include "engine.h"

class Car{
    private:
        std::string m_model;
        Engine m_engine;
    
    public:
        Car();
        Car(const std::string& model, const Engine& engine);
        ~Car();

        void drive() const;
        std::string getModel() const;
        Engine getEngine() const;
        void setModel(const std::string& model);
        void setEngine(const Engine& engine);
        Car(const Car& other);
        Car& operator=(const Car& other);
};