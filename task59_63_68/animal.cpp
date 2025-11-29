#include "animal.h"

Animal::Animal() : m_name("Unknown"), m_age(0), m_weight(0.0) {}
Animal::Animal(const std::string& name, int age, double weight)
    : m_name(name), m_age(age), m_weight(weight) {}

void Animal::setName(const std::string& n) { m_name = n; }
void Animal::setAge(int a) { m_age = a; }
void Animal::setWeight(double w) { m_weight = w; }

std::string Animal::getName() const { return m_name; }
int Animal::getAge() const { return m_age; }
double Animal::getWeight() const { return m_weight; }

bool Animal::operator==(const Animal& other) const { return m_weight == other.m_weight; }
bool Animal::operator<(const Animal& other) const { return m_weight < other.m_weight; }
bool Animal::operator>(const Animal& other) const { return m_weight > other.m_weight; }

Dog::Dog() : Animal(), m_breed("Unknown") {}
Dog::Dog(const std::string& name, int age, double weight, const std::string& breed)
    : Animal(name, age, weight), m_breed(breed) {}

void Dog::bark() const { std::cout << m_name << " barks!\n"; }
void Dog::print() const { std::cout << "Dog: " << m_name << ", age=" << m_age << ", weight=" << m_weight << ", breed=" << m_breed << "\n"; }

Cat::Cat() : Animal(), m_color("Unknown") {}
Cat::Cat(const std::string& name, int age, double weight, const std::string& color)
    : Animal(name, age, weight), m_color(color) {}

void Cat::meow() const { std::cout << m_name << " meows!\n"; }
void Cat::print() const { std::cout << "Cat: " << m_name << ", age=" << m_age << ", weight=" << m_weight << ", color=" << m_color << "\n"; }

Bird::Bird() : Animal(), m_wingspan(0.0) {}
Bird::Bird(const std::string& name, int age, double weight, double wingspan)
    : Animal(name, age, weight), m_wingspan(wingspan) {}

void Bird::fly() const { std::cout << m_name << " flies!\n"; }
void Bird::print() const { std::cout << "Bird: " << m_name << ", age=" << m_age << ", weight=" << m_weight << ", wingspan=" << m_wingspan << "\n"; }

Fish::Fish() : Animal(), m_waterType("Freshwater") {}
Fish::Fish(const std::string& name, int age, double weight, const std::string& waterType)
    : Animal(name, age, weight), m_waterType(waterType) {}

void Fish::swim() const { std::cout << m_name << " swims!\n"; }
void Fish::print() const { std::cout << "Fish: " << m_name << ", age=" << m_age << ", weight=" << m_weight << ", waterType=" << m_waterType << "\n"; }

Lion::Lion() : Animal(), m_maneSize(0) {}
Lion::Lion(const std::string& name, int age, double weight, int maneSize)
    : Animal(name, age, weight), m_maneSize(maneSize) {}

void Lion::roar() const { std::cout << m_name << " roars!\n"; }
void Lion::print() const { std::cout << "Lion: " << m_name << ", age=" << m_age << ", weight=" << m_weight << ", maneSize=" << m_maneSize << "\n"; }

Elephant::Elephant() : Animal(), m_tuskLength(0.0) {}
Elephant::Elephant(const std::string& name, int age, double weight, double tuskLength)
    : Animal(name, age, weight), m_tuskLength(tuskLength) {}

void Elephant::sound() const { std::cout << m_name << " makes elephant sound!\n"; }
void Elephant::print() const { std::cout << "Elephant: " << m_name << ", age=" << m_age << ", weight=" << m_weight << ", tuskLength=" << m_tuskLength << "\n"; }
