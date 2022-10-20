#include <stdio.h>

int main() {

    const int SIZE = 9;
    int arr[SIZE] = {88, 112, 6467, 325, 878, 3, 77, 8, 99};
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", arr[i]);
    }

    int mat[2][2] = {
            {1, 1},
            {1, 4}
    };
    int mat2[2][2] = {
            {1, 2},
            {4, 1}
    };
    int mat3[3][3];

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            int sum = 0;
            for (int k = 0; k < 2; k++)
                sum = sum + mat[i][k] * mat2[k][j];
            mat3[i][j] = sum;
        }
    }
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("\n%d ", mat3[i][j]);
            if (j == 1) {
                printf("\n");
            }
        }
    }

    return 0;
}
