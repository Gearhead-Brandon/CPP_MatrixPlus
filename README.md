# s21_matrix+ - Object-Oriented Matrix Library

## Contents
1. [Introduction](#introduction)
2. [Matrix Operations](#matrix-operations)
3. [Library Implementation](#library-implementation)

## Introduction

The project involves implementing a matrix library using object-oriented programming (OOP) in C++. The library should handle basic matrix operations such as addition, subtraction, multiplication, transposition, determinant calculation, and inversion. The matrix will be represented as a class `S21Matrix`, and necessary operator overloads will be implemented for ease of use.

## Matrix Operations

The following operations need to be implemented:

- **Equality Check**: Compare matrices.
- **Addition/Subtraction**: Add or subtract matrices.
- **Multiplication**: Matrix multiplication and scalar multiplication.
- **Transpose**: Create a transposed matrix.
- **Determinant**: Calculate the determinant of the matrix.
- **Inverse**: Compute the inverse of a matrix.

Error handling should be included for invalid operations (e.g., incompatible dimensions).

## Library Implementation

- Use C++17 standards for development.
- Implement the matrix as a class (`S21Matrix`), with private members `matrix_`, `rows_`, and `cols_`.
- Overload operators (`+`, `-`, `*`, `==`, etc.) for matrix operations.
- Implement constructors, destructors, and other necessary methods.
- Provide unit tests using the GTest framework.
- Create a Makefile to build the library and run tests.
