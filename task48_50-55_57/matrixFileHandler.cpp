#include "matrixFileHandler.h"
#include <fstream>

void MatrixFileHandler::save(const Matrix& m, const std::string& filename) {
    std::ofstream out(filename);
    int rows = m.getRows();
    int cols = m.getCols();
    out << rows << " " << cols << "\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            out << m.getValue(i, j) << " ";
        }
        out << "\n";
    }
}

void MatrixFileHandler::load(Matrix& m, const std::string& filename) {
    std::ifstream in(filename);
    int rows, cols;
    in >> rows >> cols;
    Matrix temp(rows, cols);
    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < cols; ++j) {
            int val;
            in >> val;
            temp.setValue(i, j, val);
        }
    m = temp;
}
