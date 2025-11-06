#include <string>   
#include "matrix.h"

class MatrixFileHandler {
public:
    static void save(const Matrix& m, const std::string& filename);
    static void load(Matrix& m, const std::string& filename);
};
