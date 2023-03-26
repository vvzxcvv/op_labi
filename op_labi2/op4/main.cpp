#include "hexagon.h"
#include <iostream>

int main() {
    // Create two Hexagon objects with different side lengths
    Hexagon hex1(2);
    Hexagon hex2(3);

    // Print their properties
    std::cout << "Hexagon 1:" << std::endl;
    std::cout << "  Area: " << hex1.square() << std::endl;
    std::cout << "  Perimeter: " << hex1.perimeter() << std::endl;
    std::cout << "  Mass: " << hex1.mass() << std::endl;
    std::cout << "  Position: (" << hex1.position().x << ", " << hex1.position().y << ")" << std::endl;
    std::cout << std::endl;

    std::cout << "Hexagon 2:" << std::endl;
    std::cout << "  Area: " << hex2.square() << std::endl;
    std::cout << "  Perimeter: " << hex2.perimeter() << std::endl;
    std::cout << "  Mass: " << hex2.mass() << std::endl;
    std::cout << "  Position: (" << hex2.position().x << ", " << hex2.position().y << ")" << std::endl;
    std::cout << std::endl;

    // Compare the hexagons based on mass using the IPhysObject interface
    if (hex1 == hex2) {
        std::cout << "The hexagons have the same mass." << std::endl;
    } else if (hex1 < hex2) {
        std::cout << "Hexagon 1 has a smaller mass than hexagon 2." << std::endl;
    } else {
        std::cout << "Hexagon 2 has a smaller mass than hexagon 1." << std::endl;
    }

    return 0;
}
