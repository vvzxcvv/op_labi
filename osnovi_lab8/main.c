#include <stdio.h>
#include <string.h>

char *strncopy(char *dest, const char *src, int n)
{
    int i;
    for (i = 0; i < n && src[i] != '\0'; i++)
        dest[i] = src[i];
    return dest;
}

int main() {
    int n;
    char str1[] = "abcdefg";
    printf("n?: ");
    scanf("%d", &n);

    char str2[n];

    strncpy(str2, str1, n);
    str2[n] = '\0';

    printf("str2: %s\n", str2);

    strncopy(str2, str1, n);
    printf("str2: %s\n", str2);

    return 0;

}

//    strcpy(str2, str1, 2);
//    str2[n] = '\0';


//    int num = 0;
//    while (str1[num] != '\0') {
//        num++;
//    }

//    int i = 0;
//    while (i < n) {
//        str1[num] = str2[i];
//        num++;
//        i++;
//    }
////    str1[num] = '\0';
//    printf("string: %s\n", str1);


    // copy
//    int j = 0;
//    while (j < n) {
//        str2[j] = str1[j];
//        j++;
//    }
//    str2[j] = '\0';
//    printf("string: %s\n", str2);






//    int find;
//    printf("find?: ");
//    scanf("%d", &find);
//    int k = 0;
//    while (str1[k] != '\0') {
//        if (str1[k] == find) {
//            printf("index: %d\n", k);
//            break;
//        }
//        k++;
//    }
//    if (str1[k] == '\0') {
//        printf("no c\n");
//    }


