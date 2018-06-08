from distutils.core import setup
from distutils.extension import Extension
from Cython.Distutils import build_ext

sourcefiles = ['pymatrix.pyx', '../timer.c', '../arrays.c' ,'../randn.c','../matrix.c']
ext_modules = [
	Extension(
		"pymatrix",
		sources = sourcefiles,
		libraries = ['m'],
		language = 'c'
	)
]

setup(
	name = 'Challenge app',
	cmdclass = {'build_ext': build_ext},
	ext_modules = ext_modules
)
