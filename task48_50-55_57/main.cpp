#include "matrix.h"
#include "matrixFileHandler.h"
#include "chessBoard.h"
#include <iostream>

int main() {

    // Matrix m1(2, 3);
    // m1.setValue(0, 0, 1);
    // m1.setValue(0, 1, 2);
    // m1.setValue(0, 2, 3);
    // m1.setValue(1, 0, 4);
    // m1.setValue(1, 1, 5);
    // m1.setValue(1, 2, 6);

    // std::cout << "m1:\n";
    // std::cout << m1 << std::endl;


    // Matrix m2 = m1;
    // std::cout << "\nm2 (copy of m1):\n";
    // std::cout << m2 << std::endl;


    // Matrix m3;
    // m3 = m1;
    // std::cout << "\nm3 (assigned from m1):\n";
    // std::cout << m3 << std::endl;


    // ++m1;
    // std::cout << "\nm1 after prefix ++:\n";
    // std::cout << m1 << std::endl;


    // m2++;
    // std::cout << "\nm2 after postfix ++:\n";
    // std::cout << m2 << std::endl;


    // Matrix m4 = m1.rotate90();
    // std::cout << "\nm4 (m1 rotated 90 degrees):\n";
    // std::cout << m4 << std::endl;


    // Matrix m5(3, 2);
    // m5.setValue(0, 0, 1);
    // m5.setValue(0, 1, 2);
    // m5.setValue(1, 0, 3);
    // m5.setValue(1, 1, 4);
    // m5.setValue(2, 0, 5);
    // m5.setValue(2, 1, 6);

    // std::cout << "\nm5:\n";
    // std::cout << m5 << std::endl;

    // Matrix m6 = m1 * m5;
    // std::cout << "\nm6 (m1 * m5):\n";
    // std::cout << m6 << std::endl;


    // Matrix m7(2, 2);
    // Matrix m8 = m1 * m7;
    // std::cout << "\nm8 (attempted m1 * m7 with wrong dimensions):\n";
    // std::cout << m8 << std::endl;

 
    // MatrixFileHandler::save(m1, "outputMatrix.txt");
    // std::cout << "\nm1 saved to 'outputMatrix.txt'\n";


    // Matrix mLoaded;
    // MatrixFileHandler::load(mLoaded, "inputMatrix.txt");
    // std::cout << "\nmLoaded from 'inputMatrix.txt':\n";
    // std::cout << mLoaded << std::endl;

    ChessBoard b;
    b.setupDefault();
    b.printBoard();

    return 0;
}
