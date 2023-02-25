#include <iostream>
#include "procedures.h"
#include "square.h"
#include "point.h"

using namespace std;

int main() {

    sqr = new Square();

    sqr->move(new Point(1, 2))
       ->move(new Point(3, 2))

//    //
//    double x = 13.37;
//    cout << "value: " << x << endl;
//    otbrosPointer(&x);
//    cout << "otbrosPointer: " << x << endl;
//    otbrosReference(x);
//    cout << "otbrosReference: " << x << endl;
//    cout << endl;
//
//    // change
//    double number = 12.34;
//    std::cout << "num: " << number << endl;
//
//    changePointer(&number);
//    std::cout << "changePointer: " << number << endl;
//
//    number = 12.34;
//    changeReference(number);
//    cout << "changeReference: " << number << endl;
//
//    cout << endl;
//
//    // move
//    int a = 10, b = 20;
//    cout << "a, b: " << a << " " << b << endl;
//    int moveX = 5, moveY = 6;
//    squareMovePointer(&a, &b, moveX, moveY);
//
//    cout << "squareMovePointer: " << a << " " << b << endl;
//    a = 10, b = 20;
//    squareMoveReference(a, b, moveX, moveY);
//    cout << "squareMoveReference: " << a << " " << b << endl;
//
//    cout << endl;
//
//    // swap
//    vector<vector<int>> matrix = {{1, 2, 3},
//                                  {4, 5, 6},
//                                  {7, 8, 9}};
//    cout << "matrix: " << endl;
//    outputMatrix(matrix);
//    cout << endl;
//
//    int row1 = 0;
//    int row2 = 1;
//    matrixSwapPointer(&matrix, row1, row2);
//
//    cout << "matrixSwapPointer: " << endl;
//    outputMatrix(matrix);
//    cout << endl;
//
//
//    row1 = 1;
//    row2 = 2;
//    matrixSwapReference(matrix, row1, row2);
//    cout << "matrixSwapReference: " << endl;
//    outputMatrix(matrix);
//    cout << endl;

    return 0;
}
