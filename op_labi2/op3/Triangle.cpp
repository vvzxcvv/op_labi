#include "Triangle.h"

Vector2D::Vector2D(double x, double y) : x(x), y(y) {}

Vector2D Vector2D::operator+(const Vector2D& other) const {
    return Vector2D(x + other.x, y + other.y);
}

Triangle::Triangle(double a, double b, double c) : a(a), b(b), c(c) {}

double Triangle::getArea() const {
    double p = (a + b + c) / 2;
    return std::sqrt(p * (p - a) * (p - b) * (p - c));
}

bool Triangle::operator==(const Triangle& other) const {
    return getArea() == other.getArea();
}

bool Triangle::operator!=(const Triangle& other) const {
    return getArea() != other.getArea();
}

bool Triangle::operator<(const Triangle& other) const {
    return getArea() < other.getArea();
}

bool Triangle::operator>(const Triangle& other) const {
    return getArea() > other.getArea();
}

Triangle Triangle::operator+(const Vector2D& vector) const {
    return Triangle(a, b, c) + vector;
}
