from setuptools import setup, Extension

__auhtor__ = 'Takayuki Suzuki'
__version__ = '0.0'

requires = [
]

module = Extension('daikei_test',
                   sources=['src/spammodule.c'])

setup(name='PackageName',
      version='0.0',
      description='c ext sample spam',
      author=__auhtor__,
      author_email='sample@mail.com',
      url='http://sample/url.html',
      long_description='''
just sample.
''',
      ext_modules=[module])

