#include "pieces.h"
#include "chessBoard.h"
#include <cmath>

Piece::Piece(char c, char t)
    : color(c), type(t) {}

Piece::~Piece() {}

char Piece::getColor() const {
    return color;
}

char Piece::getType() const {
    return type;
}

King::King(char c)
    : Piece(c,'K') {}

char King::getSymbol() const {
    return (color=='W') ? 'K' : 'k';
}

bool King::canMove(int r1,int c1,int r2,int c2,const ChessBoard& board) const {
    int dr = std::abs(r2-r1);
    int dc = std::abs(c2-c1);
    if(dr <= 1 && dc <= 1 && !(dr==0 && dc==0)) {
        Piece* p = board.getPiece(r2,c2);
        if(!p || p->getColor()!=color)
            return true;
    }
    return false;
}

Queen::Queen(char c)
    : Piece(c,'Q') {}

char Queen::getSymbol() const {
    return (color=='W') ? 'Q' : 'q';
}

bool Queen::canMove(int r1,int c1,int r2,int c2,const ChessBoard& board) const {
    if(r1==r2 || c1==c2 || std::abs(r2-r1)==std::abs(c2-c1)) {
        int dr = (r2>r1) ? 1 : (r2<r1) ? -1 : 0;
        int dc = (c2>c1) ? 1 : (c2<c1) ? -1 : 0;
        int rr = r1+dr;
        int cc = c1+dc;
        while(rr!=r2 || cc!=c2) {
            if(!board.isEmpty(rr,cc))
                return false;
            rr += dr;
            cc += dc;
        }
        Piece* p = board.getPiece(r2,c2);
        if(!p || p->getColor()!=color)
            return true;
    }
    return false;
}

Rook::Rook(char c)
    : Piece(c,'R') {}

char Rook::getSymbol() const {
    return (color=='W') ? 'R' : 'r';
}

bool Rook::canMove(int r1,int c1,int r2,int c2,const ChessBoard& board) const {
    if(r1==r2 || c1==c2) {
        int dr = (r2>r1) ? 1 : (r2<r1) ? -1 : 0;
        int dc = (c2>c1) ? 1 : (c2<c1) ? -1 : 0;
        int rr = r1+dr;
        int cc = c1+dc;
        while(rr!=r2 || cc!=c2) {
            if(!board.isEmpty(rr,cc))
                return false;
            rr += dr;
            cc += dc;
        }
        Piece* p = board.getPiece(r2,c2);
        if(!p || p->getColor()!=color)
            return true;
    }
    return false;
}

Bishop::Bishop(char c)
    : Piece(c,'B') {}

char Bishop::getSymbol() const {
    return (color=='W') ? 'B' : 'b';
}

bool Bishop::canMove(int r1,int c1,int r2,int c2,const ChessBoard& board) const {
    if(std::abs(r2-r1)==std::abs(c2-c1)) {
        int dr = (r2>r1) ? 1 : -1;
        int dc = (c2>c1) ? 1 : -1;
        int rr = r1+dr;
        int cc = c1+dc;
        while(rr!=r2 && cc!=c2) {
            if(!board.isEmpty(rr,cc))
                return false;
            rr += dr;
            cc += dc;
        }
        Piece* p = board.getPiece(r2,c2);
        if(!p || p->getColor()!=color)
            return true;
    }
    return false;
}

Knight::Knight(char c)
    : Piece(c,'N') {}

char Knight::getSymbol() const {
    return (color=='W') ? 'N' : 'n';
}

bool Knight::canMove(int r1,int c1,int r2,int c2,const ChessBoard& board) const {
    int dr = std::abs(r2-r1);
    int dc = std::abs(c2-c1);
    if((dr==2 && dc==1) || (dr==1 && dc==2)) {
        Piece* p = board.getPiece(r2,c2);
        if(!p || p->getColor()!=color)
            return true;
    }
    return false;
}

Pawn::Pawn(char c)
    : Piece(c,'P') {}

char Pawn::getSymbol() const {
    return (color=='W') ? 'P' : 'p';
}

bool Pawn::canMove(int r1,int c1,int r2,int c2,const ChessBoard& board) const {
    int dir = (color=='W') ? -1 : 1;
    if(c1==c2) {
        if(r2-r1==dir && board.isEmpty(r2,c2))
            return true;
        if((color=='W' && r1==6 || color=='B' && r1==1) && r2-r1==2*dir && board.isEmpty(r1+dir,c1) && board.isEmpty(r2,c2))
            return true;
    }
    if(std::abs(c2-c1)==1 && r2-r1==dir) {
        Piece* p = board.getPiece(r2,c2);
        if(p && p->getColor()!=color)
            return true;
    }
    return false;
}
