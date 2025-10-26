#pragma once
#include <string>

class Engine{
    private:
        int m_horsepower;
        std::string m_type;
    public:
        Engine();
        Engine(int horsepower, const std::string& type);
        ~Engine();

        void sound() const;
        int getHorsepower() const;
        std::string getType() const;
        void setHorsepower(int horsepower);
        void setType(const std::string& type);
};