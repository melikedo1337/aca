#pragma once

#include <iostream>
#include <string>

class Car {
private:
    std::string m_brand;
    int m_year;

public:
    Car();
    Car(const std::string& brand, int year);

    void setBrand(const std::string& brand);
    void setYear(int year);
    std::string getBrand() const;
    int getYear() const;
    void print() const;
};
