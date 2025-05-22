from setuptools import find_packages
from setuptools import setup

setup(
    name='ros2_base',
    version='0.0.0',
    packages=find_packages(
        include=('ros2_base', 'ros2_base.*')),
)
