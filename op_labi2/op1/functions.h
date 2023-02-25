#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <iostream>

void otbrosPointer(double *number);

void otbrosReference(double &number);

void changePointer(double *number);

void changeReference(double &number);

void squareMovePointer(double *x, double *y, double deltaX, double deltaY);

void squareMoveReference(double &x, double &y, double deltaX, double deltaY);

void matrixSwapPointer(double *matrix, int row1, int row2, int columns);

void matrixSwapReference(double **matrix, int row1, int row2, int columns);

#endif
