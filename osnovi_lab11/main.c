#include "circle.h"

int main() {
    double x, y, radius;

    printf("x: ");
    scanf("%lf", &x);

    printf("y: ");
    scanf("%lf", &y);

    printf("radius");
    scanf("%lf", &radius);

    Circle c = createCircle(x, y, radius);
    printf("area: %f\n", circleArea(c));
    printf("circumference: %f\n", circleCircumference(c));

    return 0;
}
