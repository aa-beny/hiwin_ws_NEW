from setuptools import find_packages
from setuptools import setup

setup(
    name='hand_eye_flexbe_behaviors',
    version='1.0.0',
    packages=find_packages(
        include=('hand_eye_flexbe_behaviors', 'hand_eye_flexbe_behaviors.*')),
)
