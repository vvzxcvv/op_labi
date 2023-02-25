#ifndef PROCEDURES_H
#define PROCEDURES_H

#include <iostream>
#include <vector>

using namespace std;

void otbrosPointer(double *number);

void otbrosReference(double &number);

void changePointer(double *number);

void changeReference(double &number);

void squareMovePointer(int *x, int *y, int moveX, int moveY);

void squareMoveReference(int &x, int &y, int moveX, int moveY);

void matrixSwapPointer(vector<vector<int>> *matrix, int row1, int row2);

void matrixSwapReference(vector<vector<int>> &matrix, int row1, int row2);

void outputMatrix(const std::vector<std::vector<int>> &matrix);

#endif
