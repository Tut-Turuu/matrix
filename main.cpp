#include <iostream>
#include "util.hpp"

int main() {
    Matrix matrix(5, 5, 9);

    matrix.print();

    Matrix matrix1(7,10, 2);

    matrix1.print();

    Matrix matrix2(matrix);

    matrix2.print();

    matrix2 = matrix1;

    matrix2.print();

}