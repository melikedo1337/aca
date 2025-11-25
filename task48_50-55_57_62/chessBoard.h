#include "matrix.h"

class ChessBoard : public Matrix {
public:
    ChessBoard();
    ChessBoard(ChessBoard&& other) noexcept;
    ChessBoard& operator=(ChessBoard&& other) noexcept;
    
    void setupDefault();
    void printBoard() const;
};
