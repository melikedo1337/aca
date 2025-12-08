#pragma once
#include <string>

class ChessBoard;

class Piece {
protected:
    char color; // 'W'  ,'B'
    char type;  // 'K','Q','R','B','N','P'
public:
    Piece(char c, char t);
    virtual ~Piece();

    char getColor() const;
    char getType() const;
    virtual char getSymbol() const = 0;
    virtual bool canMove(int r1,int c1,int r2,int c2,const ChessBoard& board) const = 0;
};

class King : public Piece {
public:
    King(char c);
    char getSymbol() const override;
    bool canMove(int r1,int c1,int r2,int c2,const ChessBoard& board) const override;
};

class Queen : public Piece {
public:
    Queen(char c);
    char getSymbol() const override;
    bool canMove(int r1,int c1,int r2,int c2,const ChessBoard& board) const override;
};

class Rook : public Piece {
public:
    Rook(char c);
    char getSymbol() const override;
    bool canMove(int r1,int c1,int r2,int c2,const ChessBoard& board) const override;
};

class Bishop : public Piece {
public:
    Bishop(char c);
    char getSymbol() const override;
    bool canMove(int r1,int c1,int r2,int c2,const ChessBoard& board) const override;
};

class Knight : public Piece {
public:
    Knight(char c);
    char getSymbol() const override;
    bool canMove(int r1,int c1,int r2,int c2,const ChessBoard& board) const override;
};

class Pawn : public Piece {
public:
    Pawn(char c);
    char getSymbol() const override;
    bool canMove(int r1,int c1,int r2,int c2,const ChessBoard& board) const override;
};
