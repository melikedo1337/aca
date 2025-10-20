#include <iostream>
using namespace std;

class Matrix {
    int rows, cols;
    int** data;

public:
    Matrix(int r, int c) : rows(r), cols(c) {
        data = new int*[rows];
        for (int i = 0; i < rows; i++)
            data[i] = new int[cols];
    }

    void fillRandom() {
        for (int i = 0; i < rows; i++)
            for (int j = 0; j < cols; j++)
                data[i][j] = rand() % 10;
    }

    void print() const {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++)
                cout << data[i][j] << " ";
            cout << endl;
        }
    }

    Matrix add(const Matrix& other) const {
        Matrix result(rows, cols);
        for (int i = 0; i < rows; i++)
            for (int j = 0; j < cols; j++)
                result.data[i][j] = data[i][j] + other.data[i][j];
        return result;
    }

    ~Matrix() {
        for (int i = 0; i < rows; i++)
            delete[] data[i];
        delete[] data;
    }
};

int main() {
    Matrix A(2, 3), B(2, 3);
    A.fillRandom();
    B.fillRandom();

    cout << "Matrix A:\n";
    A.print();

    cout << "\nMatrix B:\n";
    B.print();

    cout << "\nA + B:\n";
    Matrix C = A.add(B);
    C.print();
}
