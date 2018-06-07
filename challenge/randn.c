#include "defs.h"

#define PI 3.141592654

// Random number generator as per Abramowitz & Stegun
// Source taken from:
// http://c-faq.com/lib/gaussian.html

my_prec normal_rand(void){
	static my_prec U, V;
	static int phase = 0;
	my_prec Z;

	if(phase == 0) {
		U = (rand() + 1.) / (RAND_MAX + 2.);
		V = rand() / (RAND_MAX + 1.);
		Z = sqrt(-2 * log(U)) * sin(2 * PI * V);
	} else
		Z = sqrt(-2 * log(U)) * cos(2 * PI * V);

	phase = 1 - phase;

	return Z;
}

/*************************

		COMMENTS:

	It is always good to know accurate and fast
	distribution-based random number generators. We invite
	you to see:
	https://people.sc.fsu.edu/~jburkardt/c_src/normal/normal.html

	It holds also some interesting pieces of code! See
	https://people.sc.fsu.edu/~jburkardt/c_src/c_src.html

*************************/
