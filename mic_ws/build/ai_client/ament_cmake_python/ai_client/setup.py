from setuptools import find_packages
from setuptools import setup

setup(
    name='ai_client',
    version='0.0.0',
    packages=find_packages(
        include=('ai_client', 'ai_client.*')),
)
