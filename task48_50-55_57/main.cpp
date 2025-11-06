#include "matrix.h"
#include "matrixFileHandler.h"
#include <iostream>

int main() {
    // --- Test 1: basic construction and setValue ---
    Matrix m1(2, 3);
    m1.setValue(0, 0, 1);
    m1.setValue(0, 1, 2);
    m1.setValue(0, 2, 3);
    m1.setValue(1, 0, 4);
    m1.setValue(1, 1, 5);
    m1.setValue(1, 2, 6);

    std::cout << "m1:\n";
    std::cout << m1 << std::endl;

    // --- Test 2: copy constructor ---
    Matrix m2 = m1;
    std::cout << "\nm2 (copy of m1):\n";
    std::cout << m2 << std::endl;

    // --- Test 3: assignment operator ---
    Matrix m3;
    m3 = m1;
    std::cout << "\nm3 (assigned from m1):\n";
    std::cout << m3 << std::endl;

    // --- Test 4: prefix ++ ---
    ++m1;
    std::cout << "\nm1 after prefix ++:\n";
    std::cout << m1 << std::endl;

    // --- Test 5: postfix ++ ---
    m2++;
    std::cout << "\nm2 after postfix ++:\n";
    std::cout << m2 << std::endl;

    // --- Test 6: rotate90 ---
    Matrix m4 = m1.rotate90();
    std::cout << "\nm4 (m1 rotated 90 degrees):\n";
    std::cout << m4 << std::endl;

    // --- Test 7: valid multiplication ---
    Matrix m5(3, 2);
    m5.setValue(0, 0, 1);
    m5.setValue(0, 1, 2);
    m5.setValue(1, 0, 3);
    m5.setValue(1, 1, 4);
    m5.setValue(2, 0, 5);
    m5.setValue(2, 1, 6);

    std::cout << "\nm5:\n";
    std::cout << m5 << std::endl;

    Matrix m6 = m1 * m5;
    std::cout << "\nm6 (m1 * m5):\n";
    std::cout << m6 << std::endl;

    // --- Test 8: invalid multiplication (bad dimensions) ---
    Matrix m7(2, 2);
    Matrix m8 = m1 * m7;
    std::cout << "\nm8 (attempted m1 * m7 with wrong dimensions):\n";
    std::cout << m8 << std::endl;

    // --- Test 9: save m1 to file ---
    MatrixFileHandler::save(m1, "outputMatrix.txt");
    std::cout << "\nm1 saved to 'outputMatrix.txt'\n";

    // --- Test 10: load from file ---
    Matrix mLoaded;
    MatrixFileHandler::load(mLoaded, "inputMatrix.txt");
    std::cout << "\nmLoaded from 'inputMatrix.txt':\n";
    std::cout << mLoaded << std::endl;

    return 0;
}
