#include <vector>
#include <cmath>
#include "functions.h"

using namespace std;

void otbrosPointer(double *number) {
    *number = floor(*number);
}

void otbrosReference(double &number) {
    number = floor(number);
}

void changePointer(double *number) {
    *number = 1 / (*number);
}

void changeReference(double &number) {
    number = 1 / number;
}

void squareMovePointer(int *a, int *b, int moveX, int moveY) {
    *a += moveX;
    *b += moveY;
}

void squareMoveReference(int &a, int &b, int moveX, int moveY) {
    a += moveX;
    b += moveY;
}


void outputMatrix(const std::vector<std::vector<int>> &matrix) {
    for (const auto &row: matrix) {
        for (const auto &element: row) {
            std::cout << element << " ";
        }
        std::cout << std::endl;
    }
}

void matrixSwapPointer(std::vector<std::vector<int>> *matrix, int row1, int row2) {
    std::vector<int> temp = (*matrix)[row1];
    (*matrix)[row1] = (*matrix)[row2];
    (*matrix)[row2] = temp;
}

void matrixSwapReference(std::vector<std::vector<int>> &matrix, int row1, int row2) {
    std::vector<int> temp = matrix[row1];
    matrix[row1] = matrix[row2];
    matrix[row2] = temp;
}