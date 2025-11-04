#include "matrixCar.h"

int main() {
    MatrixCar carMatrix(2, 2);

    carMatrix.at(0, 0) = Car("BMW", 2020);
    carMatrix.at(0, 1) = Car("Audi", 2019);
    carMatrix.at(1, 0) = Car("Toyota", 2021);
    carMatrix.at(1, 1) = Car("Mercedes", 2018);

    std::cout << "Matrix of Cars:\n";
    carMatrix.print();

    return 0;
}
