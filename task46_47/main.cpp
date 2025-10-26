#include "car.h"
#include "engine.h"
#include "driver.h"
#include <iostream>
#include <string>

int main() {
    std::string model;
    std::string engineType;
    int enginePower = 0;
    std::string driverName;
    int experience = 0;

    std::cout << "Enter car model: ";
    std::cin >> model;
    std::cout << "Enter engine power (int): ";
    std::cin >> enginePower;
    std::cout << "Enter engine type: ";
    std::cin >> engineType;
    std::cout << "Enter driver name: ";
    std::cin >> driverName; 
    std::cout << "Enter driver experience (years, int): ";
    std::cin >> experience;

    Engine engine(enginePower, engineType);
    Car car(model, engine);
    Driver driver(driverName, experience);

    std::cout << "\nCreated:\n"
              << "  Car model: " << model << "\n"
              << "  Engine: " << enginePower << " HP, " << engineType << "\n"
              << "  Driver: " << driverName << " (" << experience << " years)\n\n";

    driver.driveCar(car);

    return 0;
}