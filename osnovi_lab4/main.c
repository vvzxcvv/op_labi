#include <stdio.h>

int main() {

    int a = 64;
    int b = 69;
    int c = 87;

    int x1 = !!((a - c) & (1 << 31));
    int x2 = !!((b - c) & (1 << 31));

    int res = (x1 && !x2);
    printf("\n%d", res);

//    printf("x, min, max: ");
//    scanf("%d %d %d", &min, &max, &x);

//    printf("%d", (x >> 12) % 2);
//    return 0;

}