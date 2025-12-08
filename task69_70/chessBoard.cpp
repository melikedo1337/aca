#include "chessBoard.h"

ChessBoard::ChessBoard()
    : Matrix<Piece*>(8, 8, nullptr) {}

ChessBoard::~ChessBoard() {
    for(int i = 0; i < rowCount(); i++)
        for(int j = 0; j < colCount(); j++)
            delete getPiece(i, j);
}

Piece* ChessBoard::getPiece(int r, int c) const {
    return this->get(r,c);
}

void ChessBoard::setPiece(int r, int c, Piece* piece) {
    this->get(r,c) = piece;
}

bool ChessBoard::isEmpty(int r, int c) const {
    return getPiece(r,c) == nullptr;
}

bool ChessBoard::isEnemy(int r, int c, char color) const {
    Piece* p = getPiece(r,c);
    return p && p->getColor() != color;
}

void ChessBoard::print() const {
    for(int i = 0; i < rowCount(); i++) {
        for(int j = 0; j < colCount(); j++) {
            Piece* p = getPiece(i,j);
            if(p)
                std::cout << p->getSymbol() << " ";
            else
                std::cout << ". ";
        }
        std::cout << std::endl;
    }
}