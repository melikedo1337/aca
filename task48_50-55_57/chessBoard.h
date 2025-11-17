#include "matrix.h"

class ChessBoard : public Matrix {
public:
    ChessBoard();
    
    void setupDefault();
    void printBoard() const;
};