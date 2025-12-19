#pragma once
#include <string>

class SingleOne {
private:
    std::string licensePlate;
    int parkingSpot;    
public:
    SingleOne(const std::string& plate, int spot)
        : licensePlate(plate), parkingSpot(spot) {}
    std::string getLicensePlate() const {
        return licensePlate;
    }
    int getParkingSpot() const {
        return parkingSpot;
    }
    void setParkingSpot(int spot) {
        parkingSpot = spot;
    }
};
