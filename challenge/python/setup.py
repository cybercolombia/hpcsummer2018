from distutils.core import setup
from distutils.extension import Extension
from Cython.Distutils import build_ext
import os
import sysconfig

extra_compile_args = sysconfig.get_config_var('CFLAGS').split()
extra_compile_args += ["-std=c99"]

sourcefiles = ['pymatrix.pyx', '../timer.c', '../arrays.c' ,'../randn.c','../matrix.c']
ext_modules = [
	Extension(
		"pymatrix",
		sources = sourcefiles,
		libraries = ['m'],
		extra_compile_args=extra_compile_args,
		language = 'c'
	)
]

setup(
	name = 'Challenge app',
	cmdclass = {'build_ext': build_ext},
	ext_modules = ext_modules
)
