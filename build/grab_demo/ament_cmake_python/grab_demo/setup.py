from setuptools import find_packages
from setuptools import setup

setup(
    name='grab_demo',
    version='0.0.0',
    packages=find_packages(
        include=('grab_demo', 'grab_demo.*')),
)
