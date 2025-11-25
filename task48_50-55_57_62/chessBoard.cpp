#include "matrix.h"
#include "chessBoard.h"

ChessBoard::ChessBoard() {
    for (int i = 0; i < 8; ++i)
        for (int j = 0; j < 8; ++j)
            setValue(i, j, 0);
}

ChessBoard::ChessBoard(ChessBoard&& other) noexcept
    : Matrix(std::move(other))
{
}

ChessBoard& ChessBoard::operator=(ChessBoard&& other) noexcept {
    if (this != &other) {
        Matrix::operator=(std::move(other));
    }
    return *this;
}

void ChessBoard::setupDefault() {
    setValue(0, 0, -2); setValue(0, 1, -3); setValue(0, 2, -4);
    setValue(0, 3, -5); setValue(0, 4, -6); setValue(0, 5, -4);
    setValue(0, 6, -3); setValue(0, 7, -2);

    for (int i = 0; i < 8; i++) setValue(1, i, -1);
    
    for (int i = 2; i < 6; ++i) {
        for (int j = 0; j < 8; ++j) {
            setValue(i, j, 0);
        }
    }

    for (int i = 0; i < 8; i++) setValue(6, i, 1);

    setValue(7, 0, 2); setValue(7, 1, 3); setValue(7, 2, 4);
    setValue(7, 3, 5); setValue(7, 4, 6); setValue(7, 5, 4);
    setValue(7, 6, 3); setValue(7, 7, 2);
}

void ChessBoard::printBoard() const {
    static const char* whitePieces[] = { ".", "P", "R", "N", "B", "Q", "K" };
    static const char* blackPieces[] = { ".", "p", "r", "n", "b", "q", "k" };

    std::cout << "  a b c d e f g h\n";

    for (int i = 0; i < 8; ++i) {
        std::cout << 8 - i << " ";

        for (int j = 0; j < 8; ++j) {
            int v = getValue(i, j);

            if (v == 0) std::cout << ". ";
            else if (v > 0) std::cout << whitePieces[v] << " ";
            else std::cout << blackPieces[-v] << " ";
        }

        std::cout << 8 - i << "\n";
    }

    std::cout << "  a b c d e f g h\n";
}
