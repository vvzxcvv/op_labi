#include <stdio.h>

int main() {
    FILE *file1 = fopen("text1.txt", "r");
    if (file1 == NULL) {
        printf("error 1\n");
        return 1;
    }

    FILE *file2 = fopen("text2.txt", "r");
    if (file2 == NULL) {
        printf("error 2\n");
        return 1;
    }

    FILE *file3 = fopen("text3.txt", "w");
    if (file3 == NULL) {
        printf("error 3\n");
        return 1;
    }

    char line[1000];
    while (fgets(line, 1000, file1) != NULL) {
        fputs(line, file3);
    }
    while (fgets(line, 1000, file2) != NULL) {
        fputs(line, file3);
    }

    // Close the files
    fclose(file1);
    fclose(file2);
    fclose(file3);

    return 0;
}