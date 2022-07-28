#include<pybind11/pybind11.h>
#include <pybind11/stl.h> // for binding of vectors with python conunterparts.
#include "header.hpp"


PYBIND11_MODULE(example, m) {
    m.def("cpp_add", &cpp_add, "A function which adds two numbers");
    m.def("matrix_row_sum", &matrix_row_sum, "Calculates the sum of elements in each row in a 2d array/matrix.");
}