#include <stdio.h>

int main() {

    int x, y;
    printf ("int: ");
    scanf ("%d", &x);
    printf ("oct: ");
    scanf ("%o",&y);

    printf("hex = %x\n", x); // hex
    printf("oct = %o\n", x); // oct
    printf("x<<3 = %d\n", x<<3);
    printf("~x = %d\n", ~x);
    printf ("x&y = %o", x&y);

    return 0;
}