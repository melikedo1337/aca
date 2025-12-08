#pragma once
#include "matrix.h"
#include "pieces.h"
#include <iostream>

class ChessBoard : public Matrix<Piece*> {
public:
    ChessBoard();
    ~ChessBoard();

    Piece* getPiece(int r, int c) const;
    void setPiece(int r, int c, Piece* piece);

    bool isEmpty(int r, int c) const;
    bool isEnemy(int r, int c, char color) const;

    void print() const;
};
