#include "animal.h"

Animal::Animal()
    : m_name("Unknown")
    , m_age(0)
    , m_weight(0.0)
{}

Animal::Animal(const std::string& name, int age, double weight)
    : m_name(name)
    , m_age(age)
    , m_weight(weight)
{}

void Animal::setName(const std::string& n){ m_name = n; }
void Animal::setAge(int a){ m_age = a; }
void Animal::setWeight(double w){ m_weight = w; }

std::string Animal::getName() const { return m_name; }
int Animal::getAge() const { return m_age; }
double Animal::getWeight() const { return m_weight; }

void Animal::print() const {
    std::cout << "Animal(" << m_name << ", " << m_age << ", " << m_weight << ")";
}

Dog::Dog()
    : Animal("Dog", 0, 0.0)
    , m_breed("Labrador")
    , m_trained(true)
    , m_food("Bones")
    , m_tricks(3)
    , m_speed(25.0)
    , m_loyal(true)
{}

Dog::Dog(const std::string& name, int age, double weight)
    : Animal(name, age, weight)
    , m_breed("Labrador")
    , m_trained(true)
    , m_food("Bones")
    , m_tricks(3)
    , m_speed(25.0)
    , m_loyal(true)
{}

void Dog::bark() const { std::cout << m_name << " barks\n"; }

void Dog::print() const {
    std::cout << "Dog(" << m_name << ", " << m_age << ", " << m_weight << ")";
}

Cat::Cat()
    : Animal("Cat", 0, 0.0)
    , m_color("White")
    , m_indoor(true)
    , m_jump(2.0)
    , m_sleep(10)
    , m_toy("Ball")
    , m_lovesMilk(true)
{}

Cat::Cat(const std::string& name, int age, double weight)
    : Animal(name, age, weight)
    , m_color("White")
    , m_indoor(true)
    , m_jump(2.0)
    , m_sleep(10)
    , m_toy("Ball")
    , m_lovesMilk(true)
{}

void Cat::meow() const { std::cout << m_name << " meows\n"; }

void Cat::print() const {
    std::cout << "Cat(" << m_name << ", " << m_age << ", " << m_weight << ")";
}

Bird::Bird()
    : Animal("Bird", 0, 0.0)
    , m_wings(1.0)
    , m_canFly(true)
    , m_kind("Sparrow")
    , m_speed(30.0)
    , m_eggs(5)
    , m_song("Chirp")
{}

Bird::Bird(const std::string& name, int age, double weight)
    : Animal(name, age, weight)
    , m_wings(1.0)
    , m_canFly(true)
    , m_kind("Sparrow")
    , m_speed(30.0)
    , m_eggs(5)
    , m_song("Chirp")
{}

void Bird::fly() const { std::cout << m_name << " flies\n"; }

void Bird::print() const {
    std::cout << "Bird(" << m_name << ", " << m_age << ", " << m_weight << ")";
}

Fish::Fish()
    : Animal("Fish", 0, 0.0)
    , m_water("Fresh")
    , m_fins(5)
    , m_speed(10.0)
    , m_edible(true)
    , m_kind("Goldfish")
    , m_food("Plankton")
{}

Fish::Fish(const std::string& name, int age, double weight)
    : Animal(name, age, weight)
    , m_water("Fresh")
    , m_fins(5)
    , m_speed(10.0)
    , m_edible(true)
    , m_kind("Goldfish")
    , m_food("Plankton")
{}

void Fish::swim() const { std::cout << m_name << " swims\n"; }

void Fish::print() const {
    std::cout << "Fish(" << m_name << ", " << m_age << ", " << m_weight << ")";
}

Lion::Lion()
    : Animal("Lion", 0, 0.0)
    , m_cubs(2)
    , m_roar(100.0)
    , m_alpha(true)
    , m_hunt(0.8)
    , m_place("Savannah")
    , m_pride("Royal")
{}

Lion::Lion(const std::string& name, int age, double weight)
    : Animal(name, age, weight)
    , m_cubs(2)
    , m_roar(100.0)
    , m_alpha(true)
    , m_hunt(0.8)
    , m_place("Savannah")
    , m_pride("Royal")
{}

void Lion::roar() const { std::cout << m_name << " roars\n"; }

void Lion::print() const {
    std::cout << "Lion(" << m_name << ", " << m_age << ", " << m_weight << ")";
}

Elephant::Elephant()
    : Animal("Elephant", 0, 0.0)
    , m_trunk(2.0)
    , m_herd(10)
    , m_endangered(true)
    , m_kind("African")
    , m_memory(40.0)
    , m_tusk(1.0)
{}

Elephant::Elephant(const std::string& name, int age, double weight)
    : Animal(name, age, weight)
    , m_trunk(2.0)
    , m_herd(10)
    , m_endangered(true)
    , m_kind("African")
    , m_memory(40.0)
    , m_tusk(1.0)
{}

void Elephant::sound() const { std::cout << m_name << " makes sound\n"; }

void Elephant::print() const {
    std::cout << "Elephant(" << m_name << ", " << m_age << ", " << m_weight << ")";
}   