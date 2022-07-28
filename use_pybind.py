import example

def main():
    # Add two numbers
    i, j = 3, 2
    result_1 = example.cpp_add(i,j)
    print(i, " + ", j, " + ", result_1)

    # Calculate sum of rows of a matrix.
    result_2 = example.matrix_row_sum([[1,10],[3,4]])
    print("Sum of rows of a matrix : ", result_2)

if __name__ == '__main__':
    main()