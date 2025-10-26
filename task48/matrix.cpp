#include "matrix.h"

Matrix::Matrix(int rows, int cols)
    : m_rows(rows), m_cols(cols) {
    m_data = new int*[m_rows];
    for (int i = 0; i < m_rows; ++i)
        m_data[i] = new int[m_cols]{};
}

Matrix::Matrix(const Matrix& other)
    : m_rows(other.m_rows), m_cols(other.m_cols) {
    m_data = new int*[m_rows];
    for (int i = 0; i < m_rows; ++i) {
        m_data[i] = new int[m_cols];
        for (int j = 0; j < m_cols; ++j)
            m_data[i][j] = other.m_data[i][j];
    }
    std::cout << "Matrix copy constructor called\n";
}

Matrix& Matrix::operator=(const Matrix& other) {
    if (this != &other) {
        for (int i = 0; i < m_rows; ++i)
            delete[] m_data[i];
        delete[] m_data;

        m_rows = other.m_rows;
        m_cols = other.m_cols;
        m_data = new int*[m_rows];
        for (int i = 0; i < m_rows; ++i) {
            m_data[i] = new int[m_cols];
            for (int j = 0; j < m_cols; ++j)
                m_data[i][j] = other.m_data[i][j];
        }
    }
    std::cout << "Matrix assignment operator called\n";
    return *this;
}

Matrix::~Matrix() {
    for (int i = 0; i < m_rows; ++i)
        delete[] m_data[i];
    delete[] m_data;
}

void Matrix::setValue(int row, int col, int value) {
    if (row >= 0 && row < m_rows && col >= 0 && col < m_cols)
        m_data[row][col] = value;
}

int Matrix::getValue(int row, int col) const {
    if (row >= 0 && row < m_rows && col >= 0 && col < m_cols)
        return m_data[row][col];
    return 0;
}

void Matrix::print() const {
    for (int i = 0; i < m_rows; ++i) {
        for (int j = 0; j < m_cols; ++j)
            std::cout << m_data[i][j] << " ";
        std::cout << std::endl;
    }
}
