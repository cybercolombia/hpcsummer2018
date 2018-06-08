// PYTHON FRIENDLY HEADER DECLARATION
#include "defs.h"
#include "arrays.h"
#include "timer.h"
#include "randn.h"

#define seed 7

void SetMatrixZero(my_prec **A,unsigned int rows, unsigned int cols);
void SetMatrixRandom(my_prec **A,unsigned int rows, unsigned int cols);
my_prec **treatMatrix(unsigned int samples, unsigned int size_X, unsigned int size_data);
