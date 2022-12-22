#include "circle.h"

double circleArea(Circle c) {
    return PI * c.radius * c.radius;
}

double circleCircumference(Circle c) {
    return 2 * PI * c.radius;
}

Circle createCircle(double x, double y, double radius) {
    Circle c = {x, y, radius};
    return c;
}