
#ifndef OP1_SQUARE_H
#define OP1_SQUARE_H


class Square {
public:
    Point *p1;
    Point *p2;

public:
    Square *move(Point *vec) {
        p1.x += vec.x;

        return this;
    }
};


#endif //OP1_SQUARE_H
