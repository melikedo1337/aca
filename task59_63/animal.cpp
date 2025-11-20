#include "animal.h"


Animal::Animal()
    : m_name("Unknown"), m_age(0), m_weight(0.0) {}

Animal::Animal(const std::string& name, int age, double weight)
    : m_name(name), m_age(age), m_weight(weight) {}

void Animal::setName(const std::string& n) { m_name = n; }
void Animal::setAge(int a) { m_age = a; }
void Animal::setWeight(double w) { m_weight = w; }

std::string Animal::getName() const { return m_name; }
int Animal::getAge() const { return m_age; }
double Animal::getWeight() const { return m_weight; }


Dog::Dog() : Animal() {}
Dog::Dog(const std::string& name, int age, double weight)
    : Animal(name, age, weight) {}

void Dog::bark() const {
    std::cout << m_name << " barks!\n";
}

void Dog::print() const {
    std::cout << "Dog: " << m_name
              << ", age=" << m_age
              << ", weight=" << m_weight << "\n";
}


Cat::Cat() : Animal() {}
Cat::Cat(const std::string& name, int age, double weight)
    : Animal(name, age, weight) {}

void Cat::meow() const {
    std::cout << m_name << " meows!\n";
}

void Cat::print() const {
    std::cout << "Cat: " << m_name
              << ", age=" << m_age
              << ", weight=" << m_weight << "\n";
}


Bird::Bird() : Animal() {}
Bird::Bird(const std::string& name, int age, double weight)
    : Animal(name, age, weight) {}

void Bird::fly() const {
    std::cout << m_name << " flies!\n";
}

void Bird::print() const {
    std::cout << "Bird: " << m_name
              << ", age=" << m_age
              << ", weight=" << m_weight << "\n";
}


Fish::Fish() : Animal() {}
Fish::Fish(const std::string& name, int age, double weight)
    : Animal(name, age, weight) {}

void Fish::swim() const {
    std::cout << m_name << " swims!\n";
}

void Fish::print() const {
    std::cout << "Fish: " << m_name
              << ", age=" << m_age
              << ", weight=" << m_weight << "\n";
}


Lion::Lion() : Animal() {}
Lion::Lion(const std::string& name, int age, double weight)
    : Animal(name, age, weight) {}

void Lion::roar() const {
    std::cout << m_name << " roars!\n";
}

void Lion::print() const {
    std::cout << "Lion: " << m_name
              << ", age=" << m_age
              << ", weight=" << m_weight << "\n";
}


Elephant::Elephant() : Animal() {}
Elephant::Elephant(const std::string& name, int age, double weight)
    : Animal(name, age, weight) {}

void Elephant::sound() const {
    std::cout << m_name << " makes elephant sound!\n";
}

void Elephant::print() const {
    std::cout << "Elephant: " << m_name
              << ", age=" << m_age
              << ", weight=" << m_weight << "\n";
}
