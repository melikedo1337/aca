#include <iostream>
#include <cstdlib>
using namespace std;

int** createMatrix(int rows, int cols) {
    int** matrix = new int*[rows];
    for (int i = 0; i < rows; i++)
        matrix[i] = new int[cols];
    return matrix;
}

int main(int argc, char* argv[]) {
    if (argc < 3) return 1;

    int x = atoi(argv[1]);
    int y = atoi(argv[2]);

    int** a = createMatrix(x, y);

    for (int i = 0; i < x; i++)
        for (int j = 0; j < y; j++)
            a[i][j] = rand() % 10;

    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }

    for (int i = 0; i < x; i++)
        delete[] a[i];
    delete[] a;

    return 0;
}
