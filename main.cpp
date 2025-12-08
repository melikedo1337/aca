#include <iostream>
#include "chessBoard.h"
#include "pieces.h"

int main() {
    ChessBoard board;

    board.setPiece(0, 0, new Rook('W'));
    board.setPiece(0, 7, new Rook('W'));
    board.setPiece(7, 0, new Rook('B'));
    board.setPiece(7, 7, new Rook('B'));

    board.setPiece(0, 4, new King('W'));
    board.setPiece(7, 4, new King('B'));

    board.setPiece(0, 3, new Queen('W'));
    board.setPiece(7, 3, new Queen('B'));

    board.setPiece(1, 0, new Pawn('W'));
    board.setPiece(6, 0, new Pawn('B'));
    board.setPiece(1, 1, new Knight('W'));
    board.setPiece(6, 1, new Knight('B'));

    board.print();
    std::cout << std::endl;

    Piece* wRook = board.getPiece(0,0);
    if(wRook && wRook->canMove(0,0,0,5,board))
        std::cout << "White Rook can move from (0,0) to (0,5)" << std::endl;
    else
        std::cout << "White Rook cannot move from (0,0) to (0,5)" << std::endl;

    Piece* bPawn = board.getPiece(6,0);
    if(bPawn && bPawn->canMove(6,0,5,0,board))
        std::cout << "Black Pawn can move from (6,0) to (5,0)" << std::endl;
    else
        std::cout << "Black Pawn cannot move from (6,0) to (5,0)" << std::endl;

    return 0;
}
