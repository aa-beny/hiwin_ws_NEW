from setuptools import find_packages
from setuptools import setup

setup(
    name='flexbe_msgs',
    version='2.1.0',
    packages=find_packages(
        include=('flexbe_msgs', 'flexbe_msgs.*')),
)
