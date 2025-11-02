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
    return *this;
}

Matrix& Matrix::operator++(){
    for (int i = 0; i < m_rows; i++)
        for (int j = 0; j < m_cols; j++)
            ++m_data[i][j];
    return *this;
}

Matrix Matrix::operator++(int){
    Matrix temp = *this;
    ++(*this);
    return temp;
}

Matrix Matrix::operator*(const Matrix& other){
    if(m_cols != other.m_rows) {
        std::cout << "Cannot multiply: incompatible dimensions.\n";
        return Matrix(0, 0);
    }

    Matrix res(m_rows, other.m_cols);

    for(int i = 0; i < m_rows; i++){
        for(int j = 0; j < other.m_cols; j++){
            int sum = 0;
            for(int k = 0; k < m_cols; k++){
                sum += m_data[i][k] * other.m_data[k][j];
            }
            res.m_data[i][j] = sum;
        }
    }
    return res;
}

Matrix::~Matrix() {
    for (int i = 0; i < m_rows; ++i)
        delete[] m_data[i];
    delete[] m_data;
}

Matrix Matrix::rotate90() const {
    Matrix rotated(m_cols, m_rows);
    for (int i = 0; i < m_rows; ++i)
        for (int j = 0; j < m_cols; ++j)
            rotated.m_data[j][m_rows - 1 - i] = m_data[i][j];

    return rotated;
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

std::ostream& operator<<(std::ostream& out, const Matrix& mat){
    for (int i = 0; i < mat.m_rows; ++i) {
        for (int j = 0; j < mat.m_cols; ++j)
            out << mat.m_data[i][j] << " ";
        out << std::endl;
    }

    return out;
}