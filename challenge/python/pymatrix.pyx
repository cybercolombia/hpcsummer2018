import pandas as pd

ctypedef double my_prec
cdef extern from "../matrix.h":
	void SetMatrixZero(my_prec **A,unsigned int, unsigned int)
	void SetMatrixRandom(my_prec **A,unsigned int, unsigned int)
	my_prec **treatMatrix(unsigned int, unsigned int, unsigned int)

def convert2DF(unsigned int samples, unsigned int size_X, unsigned int size_data):
	cdef my_prec **m
	cdef double s, dx
	m = treatMatrix(samples,size_X,size_data)
	df = pd.DataFrame([[m[it][jt] for jt in range(size_X)] for it in range(size_data)])
	m = treatMatrix(samples,size_X,size_data)
	return df
