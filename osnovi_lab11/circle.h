#ifndef OSNOVI_LAB11_CIRCLE_H
#define OSNOVI_LAB11_CIRCLE_H
#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846

typedef struct {
    double x;
    double y;
    double radius;
} Circle;

double circleArea(Circle c);
double circleCircumference(Circle c);
Circle createCircle(double x, double y, double radius);

#endif //OSNOVI_LAB11_CIRCLE_H
