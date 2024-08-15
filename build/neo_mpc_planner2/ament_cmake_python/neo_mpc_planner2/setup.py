from setuptools import find_packages
from setuptools import setup

setup(
    name='neo_mpc_planner2',
    version='1.0.0',
    packages=find_packages(
        include=('neo_mpc_planner2', 'neo_mpc_planner2.*')),
)
