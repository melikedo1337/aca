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
    Matrix operator*(const Matrix& other);
    Matrix& operator++();
    Matrix operator++(int);
    
    friend std::ostream& operator<<(std::ostream&,const Matrix&);

    ~Matrix();

    Matrix rotate90() const;
    void setValue(int row, int col, int value);
    int getValue(int row, int col) const;
};
