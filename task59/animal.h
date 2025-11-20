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

    virtual void setName(const std::string& n);
    virtual void setAge(int a);
    virtual void setWeight(double w);

    virtual std::string getName() const;
    virtual int getAge() const;
    virtual double getWeight() const;

    virtual void print() const = 0;
};


class Dog : public Animal {
    std::string m_breed;
    bool m_trained;
    std::string m_food;
    int m_tricks;
    double m_speed;
    bool m_loyal;

public:
    Dog();
    Dog(const std::string& name, int age, double weight);

    void bark() const;
    void print() const override;
};


class Cat : public Animal {
    std::string m_color;
    bool m_indoor;
    double m_jump;
    int m_sleep;
    std::string m_toy;
    bool m_lovesMilk;

public:
    Cat();
    Cat(const std::string& name, int age, double weight);

    void meow() const;
    void print() const override;
};


class Bird : public Animal {
    double m_wings;
    bool m_canFly;
    std::string m_kind;
    double m_speed;
    int m_eggs;
    std::string m_song;

public:
    Bird();
    Bird(const std::string& name, int age, double weight);

    void fly() const;
    void print() const override;
};


class Fish : public Animal {
    std::string m_water;
    int m_fins;
    double m_speed;
    bool m_edible;
    std::string m_kind;
    std::string m_food;

public:
    Fish();
    Fish(const std::string& name, int age, double weight);

    void swim() const;
    void print() const override;
};


class Lion : public Animal {
    int m_cubs;
    double m_roar;
    bool m_alpha;
    double m_hunt;
    std::string m_place;
    std::string m_pride;

public:
    Lion();
    Lion(const std::string& name, int age, double weight);

    void roar() const;
    void print() const override;
};


class Elephant : public Animal {
    double m_trunk;
    int m_herd;
    bool m_endangered;
    std::string m_kind;
    double m_memory;
    double m_tusk;

public:
    Elephant();
    Elephant(const std::string& name, int age, double weight);

    void sound() const;
    void print() const override;
};
