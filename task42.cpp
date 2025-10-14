#include <iostream>
#include <cstdlib>
using namespace std;

int** createMatrix(int rows, int cols) {
    int** matrix = (int**)malloc(rows * sizeof(int*));
    for (int i = 0; i < rows; i++)
        matrix[i] = (int*)malloc(cols * sizeof(int));
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
        free(a[i]);
    free(a);

    return 0;
}
