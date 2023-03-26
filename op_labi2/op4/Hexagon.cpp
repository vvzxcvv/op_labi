#include "hexagon.h"
#include <iostream>
#include <cmath>
#include "CVector2D.h"

Hexagon::Hexagon() : side_a(0), hexagon_area(0), hexagon_perimeter(0), hexagon_mass(0), hexagon_center({0,0}) {}

Hexagon::Hexagon(double a) : side_a(a), hexagon_mass(0) {
    hexagon_area = 3 * sqrt(3) / 2 * pow(side_a, 2);
    hexagon_perimeter = 6 * side_a;
}

double Hexagon::square() {
    return hexagon_area;
}

double Hexagon::perimeter() {
    return hexagon_perimeter;
}

double Hexagon::mass() const {
    return hexagon_mass;
}

CVector2D Hexagon::position() const {
    return hexagon_center;
}

bool Hexagon::operator==(const IPhysObject& ob) const {
    return mass() == ob.mass();
}

bool Hexagon::operator<(const IPhysObject& ob) const {
    return mass() < ob.mass();
}

void Hexagon::draw() {
    std::cout << "Drawing a hexagon with side length " << side_a << std::endl;
}

void Hexagon::initFromDialog() {
    std::cout << "Enter side length: ";
    std::cin >> side_a;
}

const char* Hexagon::classname() {
    return "Hexagon";
}

unsigned int Hexagon::size() {
    return sizeof(*this);
}
