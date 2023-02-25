//
// Created by ykk atksh on 11.02.2023.
//

#ifndef OP1_POINT_H
#define OP1_POINT_H


class Point {
public:
    int x;
    int y;

    Point(int x, int y);

    int getX() const {
        return x;
    }

    void setX(int x) {
        Point::x = x;
    }

    int getY() const {
        return y;
    }

    void setY(int y) {
        Point::y = y;
    }
};


#endif //OP1_POINT_H
