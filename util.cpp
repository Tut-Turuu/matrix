#include "util.hpp"
#include <random>
#include <cstring>
#include <iostream>


Matrix::Matrix(int n, int m, int value) : n(n), m(m) {
    data = new int*[n];

    for (int i = 0; i < n; i++) {
        data[i] = new int[m];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0 ; j < m; j++) {
            data[i][j] = value;
        }
    }
}

Matrix::Matrix(const Matrix& other) : n(other.n), m(other.m) {
    
    data = new int*[n];

    for (int i = 0; i < n; i++) {
        data[i] = new int[m];
        memcpy(data[i], other[i], m*4);
    }

}

Matrix::~Matrix() {

    for (int i = 0; i < n; i++) {
        delete[] data[i];
    }
    delete[] data;
}

void Matrix::operator=(const Matrix& other) {
    Matrix other_copy(other);

    std::swap(n, other_copy.n);
    std::swap(m, other_copy.m);
    std::swap(data, other_copy.data);
}

int* Matrix::operator[](int x) const {
    return data[x];
}

void Matrix::print() {
    std::cout << "======================\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            std::cout << data[i][j] << ' ';
        }
        std::cout << '\n';
    }
    std::cout << "======================\n";

}