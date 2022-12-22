#include <stdio.h>
#include <stdlib.h>

int main() {
    int size = 4;

    float array[] = {-8.8, 11.2, 64.67, 55.32};
    float *ptr = array;
    for (int i = 0; i < size; ++i) {
        printf("%.2f ", *(ptr + i));
    }
    printf("\n");

    float *arr = (float *) malloc(size * sizeof(float));
    for (int i = 0; i < size; i++) {
        arr[i] = array[i];
    }
    for (int i = 0; i < size; i++) {
        printf("%.2f ", arr[i]);
    }
    free(arr);
    return 0;
}
