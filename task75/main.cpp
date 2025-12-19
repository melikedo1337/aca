#include <iostream>
#include "parking.h"

int main(){
    SingleOne car("99 HP 998", 42);
    std::cout << "Car License Plate: " << car.getLicensePlate() << std::endl;
    std::cout << "Parking Spot: " << car.getParkingSpot() << std::endl;
    car.setParkingSpot(84);
    std::cout << "Updated Parking Spot: " << car.getParkingSpot() << std::endl;     
    return 0;
}
