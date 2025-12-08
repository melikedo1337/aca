#include "matrix.h"
#include "pieces.h"
#include <iostream>

template<typename T>
Matrix<T>::Matrix() 
    : rows(0)
    , cols(0)
    , data(nullptr) {}

template<typename T>
Matrix<T>::Matrix(int r, int c, const T& value) 
    : rows(r)
    , cols(c) {
    data = new T*[rows];
    for (int i = 0; i < rows; i++) {
        data[i] = new T[cols];
        for (int j = 0; j < cols; j++)
            data[i][j] = value;
    }
}

template<typename T>
Matrix<T>::Matrix(const Matrix& other)
    : rows(other.rows)
    , cols(other.cols) {
    data = new T*[rows];
    for (int i = 0; i < rows; i++) {
        data[i] = new T[cols];
        for (int j = 0; j < cols; j++)
            data[i][j] = other.data[i][j];
    }
}


template<typename T>
Matrix<T>::Matrix(Matrix&& other) noexcept 
    : rows(other.rows)
    , cols(other.cols)
    , data(other.data)
{
    other.rows = 0;
    other.cols = 0;
    other.data = nullptr;
}

template<typename T>
Matrix<T>::~Matrix() {
    if (data) {
        for (int i = 0; i < rows; i++)
            delete[] data[i];
        delete[] data;
    }
}

template<typename T>
Matrix<T>& Matrix<T>::operator=(const Matrix& other) {
    if (this == &other) return *this;

    if (data) {
        for (int i = 0; i < rows; i++)
            delete[] data[i];
        delete[] data;
    }

    rows = other.rows;
    cols = other.cols;

    data = new T*[rows];
    for (int i = 0; i < rows; i++) {
        data[i] = new T[cols];
        for (int j = 0; j < cols; j++)
            data[i][j] = other.data[i][j];
    }

    return *this;
}

template<typename T>
Matrix<T>& Matrix<T>::operator=(Matrix&& other) noexcept {
    if (this == &other) return *this;

    if (data) {
        for (int i = 0; i < rows; i++)
            delete[] data[i];
        delete[] data;
    }

    rows = other.rows;
    cols = other.cols;
    data = other.data;

    other.rows = 0;
    other.cols = 0;
    other.data = nullptr;

    return *this;
}

template<typename T>
int Matrix<T>::rowCount() const {
    return rows;
}

template<typename T>
int Matrix<T>::colCount() const {
    return cols;
}

template<typename T>
T& Matrix<T>::get(int r, int c) {
    return data[r][c];
}

template<typename T>
const T& Matrix<T>::get(int r, int c) const {
    return data[r][c];
}

template<typename T>
void Matrix<T>::print() const {
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            std::cout << data[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

template class Matrix<int>;
template class Matrix<double>;
template class Matrix<float>;
template class Matrix<char>;
template class Matrix<Piece*>; // this is crucial for Piece* to link

