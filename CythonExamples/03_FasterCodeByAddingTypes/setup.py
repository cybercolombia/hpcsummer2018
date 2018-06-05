from distutils.core import setup
from distutils.extension import Extension
from Cython.Distutils import build_ext
ext_modules = [Extension("ejemplo1", ["ejemplo1.pyx"])]
setup(
	name = 'ejemplo 1 app',
	cmdclass = {'build_ext': build_ext},
	ext_modules = ext_modules
)
