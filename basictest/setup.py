from distutils.core import setup, Extension
 
module1 = Extension('basicc', sources = ['basiccmodule.c'])
 
setup ( name = 'NoSuchThing',
        version = '1.0',
        description = 'This is a demo package',
        ext_modules = [module1])