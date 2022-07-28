#include "header.hpp"


int cpp_add(int i, int j) {
    std::cout << "CPP modules is being run from python via pybind11\n";
    return i+j;
}

// Use STL library data types.
Vect matrix_row_sum(Matrix M){

    Vect V;
    float sum;
    int rows = M.size();
    // Reserving memory of vector based on the rows of matrix.
    V.reserve(rows);
    // Iterating through each row of the matrix
    for (const auto& i : M){
        sum = 0;
        // Iterating through each element of row.
        for (const auto& j : i)
        {
            sum += j;
        }
        V.emplace_back(sum);
    }
    return V;
}

