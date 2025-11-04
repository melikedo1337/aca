#pragma once

#include "car.h"
#include <iostream>

class MatrixCar {
private:
    int m_rows;
    int m_cols;
    Car** m_data;

public:
    MatrixCar(int rows, int cols);

    ~MatrixCar();

    Car& at(int row, int col);

    void print() const;

    int getRows() const;
    int getCols() const;
};


