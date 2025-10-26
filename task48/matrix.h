#pragma once
#include <iostream>

class Matrix {
private:
    int m_rows;
    int m_cols;
    int** m_data;

public:
    Matrix(int rows = 3, int cols = 3);
    Matrix(const Matrix& other);

    Matrix& operator=(const Matrix& other);

    ~Matrix();

    void setValue(int row, int col, int value);
    int getValue(int row, int col) const;
    void print() const;
};
