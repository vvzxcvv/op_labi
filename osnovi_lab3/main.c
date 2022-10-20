#include <stdio.h>

int main() {
//
//    int x, y;
//    printf ("int: ");
//    scanf ("%d", &x);
//    printf ("oct: ");
//    scanf ("%o",&y);
//
//    printf("hex = %x\n", x); // hex
//    printf("oct = %o\n", x); // oct
//    printf("x<<3 = %d\n", x<<3);
//    printf("~x = %d\n", ~x);
//    printf ("x&y = %o", x&y);
//
    int x = 11;
    printf ("\n%d", (x<<(x%5))&0xff);
    printf ("\n%d", (x%17)^0xAB);
    printf ("\n%d", (x%17)^);
    printf ("\n%d", (x|127)-127);
    /*
     * x%5 = 1
     * x<<(x%5) = 11<1 = 22
     */
//    printf("%d", x>>1);
//    printf("\n%d", x&y);

    return 0;
}