#pragma once
#include <string>
#include <iostream>

class Animal {
protected:
    std::string m_name;
    int m_age;
    double m_weight;

public:
    Animal();
    Animal(const std::string& name, int age, double weight);
    virtual ~Animal() = default;

    void setName(const std::string& n);
    void setAge(int a);
    void setWeight(double w);

    std::string getName() const;
    int getAge() const;
    double getWeight() const;

    bool operator==(const Animal& other) const;
    bool operator<(const Animal& other) const;
    bool operator>(const Animal& other) const;

    virtual void print() const = 0;
};

class Dog : public Animal {
    std::string m_breed;
public:
    Dog();
    Dog(const std::string& name, int age, double weight, const std::string& breed = "Unknown");
    void bark() const;
    void print() const override;
};

class Cat : public Animal {
    std::string m_color;
public:
    Cat();
    Cat(const std::string& name, int age, double weight, const std::string& color = "Unknown");
    void meow() const;
    void print() const override;
};

class Bird : public Animal {
    double m_wingspan;
public:
    Bird();
    Bird(const std::string& name, int age, double weight, double wingspan = 0.0);
    void fly() const;
    void print() const override;
};

class Fish : public Animal {
    std::string m_waterType;
public:
    Fish();
    Fish(const std::string& name, int age, double weight, const std::string& waterType = "Freshwater");
    void swim() const;
    void print() const override;
};

class Lion : public Animal {
    int m_maneSize;
public:
    Lion();
    Lion(const std::string& name, int age, double weight, int maneSize = 0);
    void roar() const;
    void print() const override;
};

class Elephant : public Animal {
    double m_tuskLength;
public:
    Elephant();
    Elephant(const std::string& name, int age, double weight, double tuskLength = 0.0);
    void sound() const;
    void print() const override;
};
