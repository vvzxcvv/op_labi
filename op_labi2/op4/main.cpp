#include "hexagon.h"
#include <iostream>

int main() {
    Hexagon hex1(2);
    Hexagon hex2(3);

    std::cout << "hexagon 1:" << std::endl;
    std::cout << "  area: " << hex1.square() << std::endl;
    std::cout << "  perimeter: " << hex1.perimeter() << std::endl;
    std::cout << "  mass: " << hex1.mass() << std::endl;
    std::cout << "  position: (" << hex1.position().x << ", " << hex1.position().y << ")" << std::endl;
    std::cout << std::endl;

    std::cout << "hexagon 2:" << std::endl;
    std::cout << "  area: " << hex2.square() << std::endl;
    std::cout << "  perimeter: " << hex2.perimeter() << std::endl;
    std::cout << "  mass: " << hex2.mass() << std::endl;
    std::cout << "  position: (" << hex2.position().x << ", " << hex2.position().y << ")" << std::endl;
    std::cout << std::endl;

    if (hex1 == hex2) {
        std::cout << "the hexagons have the same mass." << std::endl;
    } else if (hex1 < hex2) {
        std::cout << "hexagon 1 has a smaller mass than hexagon 2" << std::endl;
    } else {
        std::cout << "hexagon 2 has a smaller mass than hexagon 1" << std::endl;
    }

    return 0;
}
