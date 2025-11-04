#include "matrixCar.h"

MatrixCar::MatrixCar(int rows, int cols)
    : m_rows(rows)
    , m_cols(cols)
{
    m_data = new Car*[m_rows];
    for (int i = 0; i < m_rows; ++i)
        m_data[i] = new Car[m_cols];
}

MatrixCar::~MatrixCar() {
    for (int i = 0; i < m_rows; ++i)
        delete[] m_data[i];
    delete[] m_data;
}

Car& MatrixCar::at(int row, int col) {
    if (row < 0 || row >= m_rows || col < 0 || col >= m_cols) {
        std::cout << "Index out of range: (" << row << ", " << col << ")\n";
        return m_data[0][0];
    }
    return m_data[row][col];
}

void MatrixCar::print() const {
    for (int i = 0; i < m_rows; ++i) {
        for (int j = 0; j < m_cols; ++j) {
            m_data[i][j].print();
            std::cout << " ";
        }
        std::cout << "\n";
    }
}

int MatrixCar::getRows() const {
    return m_rows;
}
int MatrixCar::getCols() const {
    return m_cols;
}

