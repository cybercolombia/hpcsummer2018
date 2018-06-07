#include "defs.h"
#include "arrays.h"
#include "timer.h"


void SetMatrixZero(my_prec **A,unsigned int rows, unsigned int cols){
	int j,k;
	for( j = 0; j < rows; j++ )
		for( k = 0; k < cols; k++ )
			A[j][k] = 0;
}

// Matrix Transpose Code
// Matrix Multiply Code
// Matrix Inversion Code


// Perform Linear Regression


// Collect R^2, 


// Run Matrix Calculations
void myFunc(void){
	// We create the problem initial conditions (positive integers)
	unsigned int samples;
	unsigned int size_X;
	unsigned int size_data;
	// Iterator variables
	unsigned int j,k;
	// Matrix Object
	my_prec **dataMatrix;
	// Timer example
	SimpleTimer_t t1,t2;


	// Setting the problem size!
	samples = 2048; size_X = 128; size_data = 1024;

	// Creating the Matrix
	dataMatrix = CREATE_MATRIX(size_data,size_X);

	// Collect start time for this snippet
	SimpleTimer_start( &t1 );
	// Set all values of the matrix to 1
	for( j=0; j < size_data; j++ )
		for( k=0; k < size_X; k++ )
			dataMatrix[j][k] = 1;
	// Collect stop time
	SimpleTimer_stop( &t1 );
	// Print duration
	SimpleTimer_print( &t1 );


	// BEGIN: DEBUG SNIPPET
	// Why this snippet of code?
	// Collect start time for this snippet
	SimpleTimer_start( &t1 );
	// Set all values of the matrix to 1
	for( j=0; j < size_data; j++ )
		for( k=0; k < size_X; k++ )
			dataMatrix[j][k] = 2;
	// Collect stop time
	SimpleTimer_stop( &t1 );
	// Print duration
	SimpleTimer_print( &t1 );
	// END: DEBUG SNIPPET


	SimpleTimer_start( &t2 );
	// Set all values of the matrix to 0
	SetMatrixZero(dataMatrix,size_data,size_X);
	// Collect stop time
	SimpleTimer_stop( &t2 );
	// Print duration
	SimpleTimer_print( &t2 );



	// Finally, we clean the memory stack as suggested
	// from arrays.c
	free(dataMatrix[0]);
	free(dataMatrix), dataMatrix = NULL;
}


int main(int argc, char** argv){
	return 0;
}
