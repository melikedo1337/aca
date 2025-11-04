#include "car.h"

Car::Car() 
    : m_brand("Unknown")
    , m_year(0) 
{}

Car::Car(const std::string& brand, int year)
    : m_brand(brand)
    , m_year(year) 
{}

void Car::setBrand(const std::string& b){
    m_brand = b; 
}
void Car::setYear(int y){
    m_year = y; 
}

std::string Car::getBrand() const{
    return m_brand; 
}
int Car::getYear() const {
    return m_year; 
}

void Car::print() const {
    std::cout << "Car(" << m_brand << ", " << m_year << ")";
}
