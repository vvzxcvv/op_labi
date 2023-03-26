#ifndef TRIANGLE_HPP
#define TRIANGLE_HPP

#include <iostream>
#include <cmath>

class Vector2D {
public:
    double x;
    double y;
    Vector2D(double x, double y);
    Vector2D operator+(const Vector2D& other) const;
};

class Triangle {
public:
    double a;
    double b;
    double c;
    Triangle(double a, double b, double c);
    double getArea() const;
    bool operator==(const Triangle& other) const;
    bool operator!=(const Triangle& other) const;
    bool operator<(const Triangle& other) const;
    bool operator>(const Triangle& other) const;
    Triangle operator+(const Vector2D& vector) const;
};

#endif
