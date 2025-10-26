#pragma once
#include "car.h"


class Driver{
    private:
        std::string m_name;
        int m_experience;
    public:
        Driver();
        Driver(const std::string& name, int experience);
        ~Driver();

        void driveCar(const Car& car) const;
        std::string getName() const;
        int getExperience() const;
        void setName(const std::string& name);
        void setExperience(int experience);
        Driver(const Driver& other);
        Driver& operator=(const Driver& other); 
};