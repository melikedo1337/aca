#include "matrix.h"

int main() {
    Matrix m1(2, 3);
    m1.setValue(0, 0, 10);
    m1.setValue(0, 1, 20);
    m1.setValue(1, 2, 30);

    std::cout << "matrix m1:\n";
    m1.print();

    Matrix m2 = m1;
    std::cout << "m2 (copy from m1):\n";
    m2.print();

    Matrix m3;
    m3 = m1;
    std::cout << "m3 (assign from m1):\n";
    m3.print();

    return 0;
}
