#pragma once

#include<vector>
#include<iostream>

typedef std::vector<float> Vect;
typedef std::vector<std::vector<float>> Matrix;

int cpp_add(int a, int b);

Vect matrix_row_sum(Matrix M);