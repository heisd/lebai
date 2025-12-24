from setuptools import find_packages
from setuptools import setup

setup(
    name='lebai_interfaces',
    version='0.0.1',
    packages=find_packages(
        include=('lebai_interfaces', 'lebai_interfaces.*')),
)
