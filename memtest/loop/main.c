#include <stdio.h>
#include <unistd.h>

int main() {
    int n, result = 1;
    printf("Enter a number: ");
    n = 15;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    printf("%d! = %d\n", n, result);
    sleep(100);
    return 0;
}