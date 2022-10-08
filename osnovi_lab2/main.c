#include <stdio.h>
#include <math.h>

float power(float base, int exp) {
    if(exp < 0) {
        if(base == 0)
            return -0; // Error!!
        return 1 / (base * power(base, (-exp) - 1));
    }
    if(exp == 0)
        return 1;
    if(exp == 1)
        return base;
    return base * power(base, exp - 1);
}

int fact(int n) {
    return n <= 0 ? 1 : n * fact(n-1);
}

double sine(int deg) {
    deg %= 360; // make it less than 360
    float rad = deg * 3.14159 / 180;
    float sin = 0;

    int i;
    for(i = 0; i < 7; i++) { // That's Taylor series!!
        sin += power(-1, i) * power(rad, 2 * i + 1) / fact(2 * i + 1);
    }
    return sin;
}


double z1 (double a) {
    return (1-2*pow(sin(a),2))/(1+sin(2*a));
}
double z2 (double a) {
    return (1-tan(a))/(1+tan(a));
}

int main() {
    double a;
    printf("alpha: ");
    // сканф выводит 1 при вводе цифры, проверив на буквы
    if (scanf("%lf", &a) == 1) {

        if ((1+sin(2*a) && 1+tan(a)) != 0) {
            printf("tan = %.2lf\n", tan(a));

            printf("z1 = %.2lf\n", z1(a));
            printf("z2 = %.2lf\n", z2(a));
            printf("sine = %.2lf\n", sine(a));
        }
        else {
            printf ("The denominator cannot be zero.");
        }
    }
    else {
        printf("Enter a number");
    };

    return 0;
}

