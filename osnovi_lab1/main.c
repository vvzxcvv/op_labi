#include <stdio.h>

int main() {
    char t[] = "1";
    printf ("char: ");
    scanf("%s", &t);
    printf("%s\n\n",t);

    float x;
    printf ("float: ");
    scanf ("%f", &x);
    printf("%.2f\n", x);

//    float x;
//    printf ("float: ");
//    //scanf returns 1 when integer
//    if (scanf ("%f", &x)){
//        printf("%.2f\n", x);
//    }

//    double y;
//    printf ("double: ");
//    scanf ("%lf", &y);
//    printf("%.2f", y);

    return 0;
}
