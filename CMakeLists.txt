cmake_minimum_required(VERSION 3.23)
project(example)

## This directory will be the final dir
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ..)

# To add pubind11 functions.
find_package(pybind11 REQUIRED)

# Generate python module with the help of source code and binding code.
pybind11_add_module(example binder.cpp code.cpp)
