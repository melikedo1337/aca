#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string m_brand;
    string m_model;
    int m_year;
    double m_fuelLevel;
    double m_speed;

public:
    Car(string brand, string model, int year) {
        m_brand = brand;
        m_model = model;
        m_year = year;
        m_fuelLevel = 100;
        m_speed = 0;
    }

    void start() {
        cout << "Engine started\n";
    }

    void stop() {
        m_speed = 0;
        cout << "Engine stopped\n";
    }

    void drive(double km) {
        if (m_fuelLevel <= 0) {
            cout << "No fuel\n";
            return;
        }
        m_fuelLevel -= km * 0.5;
        if (m_fuelLevel < 0) m_fuelLevel = 0;
        m_speed = 60;
    }

    void refuel(double liters) {
        m_fuelLevel += liters;
        if (m_fuelLevel > 100) m_fuelLevel = 100;
    }

    void showInfo() const {
        cout << m_brand << " " << m_model << " " << m_year
             << " Fuel: " << m_fuelLevel
             << " Speed: " << m_speed << endl;
    }
};

int main() {
    Car car("Mazda", "MX-5 Miata", 1990);
    car.start();
    car.drive(50);
    car.refuel(20);
    car.stop();
    car.showInfo();
}
