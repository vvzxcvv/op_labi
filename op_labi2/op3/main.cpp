#include <iostream>
#include "Triangle.h"
#include "Stack.h"

using namespace std;

int main() {
    Stack stack;
    stack << 1 << 2 << 3 << 4 << 5;

    int n;
    stack >> n;
    cout << "popped " << n << "." << endl;

    stack.display();

    stack << 6;
    stack.display();

    stack >> n >> n >> n >> n >> n >> n;
    cout << "popped " << n << " ." << endl;

    stack.display();

    Triangle t1(3, 4, 5);
    Triangle t2(5, 12, 13);
    Triangle t3(6, 8, 10);

    cout << "t1.getArea() = " << t1.getArea() << std::endl;
    cout << "t2.getArea() = " << t2.getArea() << std::endl;
    cout << "t3.getArea() = " << t3.getArea() << std::endl;

    cout << "t1 == t2: " << (t1 == t2) << std::endl;
    cout << "t1 != t2: " << (t1 != t2) << std::endl;
    cout << "t1 < t2: " << (t1 < t2) << std::endl;
    cout << "t1 > t2: " << (t1 > t2) << std::endl;

    Vector2D v(1, 1);
    Triangle t4 = t1 + v;
    cout << "t4.getArea() = " << t4.getArea() << std::endl;



    return 0;
}
