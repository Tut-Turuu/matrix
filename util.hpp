#pragma once


class Matrix {

    int n;
    int m;
    int** data;

public:

    Matrix(int n, int m, int value);

    Matrix(const Matrix& other);

    ~Matrix();

    int* operator[](int x) const;

    void operator=(const Matrix& other);

    void print();

};