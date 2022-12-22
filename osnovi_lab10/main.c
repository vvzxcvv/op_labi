#include <stdio.h>

int countNums(int num) {
    int count = 0;
    while (num != 0) {
        num /= 10;
        count++;
    }
    return count;
}

int numToArr(int num, int *arr) {
    int count = countNums(num);
    for (int i = 0; i < count; i++) {
        arr[i] = num % 10; // get last
        num /= 10; // cut last
    }
    return count;
}

void printArr(int *arr, int size) {
    for (int i = size - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int sum(int a) {
    int num;
    while (a != 0) {
        num = a % 10 + sum(a / 10);
        return num;
    }
}

int main() {
    int num = 123456;
//    scanf("%d", &num);

    int count = countNums(num);
    int arr[count];

    numToArr(num, arr);
    printArr(arr, count);

    printf("%d\n", sum(num));


    return 0;
}
