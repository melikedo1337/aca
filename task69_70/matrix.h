#pragma once

template<typename T>
class Matrix {
private:
    int rows;
    int cols;
    T** data;

public:
    Matrix();
    Matrix(int r, int c, const T& value = T());
    Matrix(const Matrix& other);
    Matrix(Matrix&& other) noexcept;
    ~Matrix();

    Matrix& operator=(const Matrix& other);
    Matrix& operator=(Matrix&& other) noexcept;

    int rowCount() const;
    int colCount() const;

    T& get(int r, int c);
    const T& get(int r, int c) const;

    void print() const; 
};
