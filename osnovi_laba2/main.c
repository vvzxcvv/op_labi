#include <stdio.h>
#include <math.h>

int main() {
    double a;
//    double a = 0.75 * M_PI;
    printf("alpha: ");
    // сканф выводит 1 при вводе цифры, проверив на буквы
    if (scanf("%lf", &a) == 1) {

        if ((1+sin(2*a) && 1+tan(a)) != 0) {
            printf("tan = %.2lf\n", tan(a));

            double z1 = (1-2*pow(sin(a),2))/(1+sin(2*a));
            printf("z1 = %.2lf\n", z1);

            double z2 = (1-tan(a))/(1+tan(a));
            printf("z2 = %.2lf", z2);
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
