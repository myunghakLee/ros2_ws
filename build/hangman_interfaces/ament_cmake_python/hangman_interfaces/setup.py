from setuptools import find_packages
from setuptools import setup

setup(
    name='hangman_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('hangman_interfaces', 'hangman_interfaces.*')),
)
