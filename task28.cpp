#include <iostream>

int** create_matrix(int rows, int cols) {
    if (rows <= 0 || cols <= 0) return nullptr;

    int** mat = new int*[rows];
    for (int i = 0; i < rows; ++i) {
        mat[i] = new int[cols];
    }

    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < cols; ++j)
            mat[i][j] = i * cols + j;

    return mat;
}

void free_matrix(int** mat, int rows) {
    if (!mat) return;
    for (int i = 0; i < rows; ++i)
        delete[] mat[i];
    delete[] mat;
}

int main() {
    int rows, cols;
    std::cout << "Enter rows and cols: ";
    std::cin >> rows >> cols;

    int** matrix = create_matrix(rows, cols);
    if (!matrix) {
        std::cout << "Invalid dimensions\n";
        return 0;
    }

    std::cout << "Matrix:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j)
            std::cout << matrix[i][j] << ' ';
        std::cout << '\n';
    }

    free_matrix(matrix, rows);
    return 0;
}
