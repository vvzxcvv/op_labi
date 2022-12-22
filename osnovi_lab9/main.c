#include <stdio.h>
#include <string.h>

void convert(char *num) {
    int length = strlen(num);
    if (length == 0) {
        printf("%s", "empty string");
        return;
    }

    char *digits[]
            = {"zero", "one", "two", "three", "four",
               "five", "six", "seven", "eight", "nine"};

    char *afterNine[]
            = {"", "ten", "eleven", "twelve",
               "thirteen", "fourteen", "fifteen", "sixteen",
               "seventeen", "eighteen", "nineteen"};

    char *afterTwenty[] = {
            "", "", "twenty",
            "thirty", "forty", "fifty",
            "sixty", "seventy", "eighty",
            "ninety"};

    char *hundred[] = {"hundred"};

    printf("\n%s ", num);

    if (length == 1) {
        printf("%s\n", digits[*num - '0']);
        return;
    }

    while (*num != '\0') {
        // 100
        if (length == 3) {
            if (*num - '0' != 0) {
                printf("%s ", hundred[length - 3]);
            }
        } else {
            // 10-19
            if (*num == '1') {
                int sum = *num - '0' + *(num + 1) - '0';
                printf("%s", afterNine[sum]);
                return;
                // 20
            } else if (*num == '2' && *(num + 1) == '0') {
                printf("twenty");
                return;
                // 21-99
            } else {
                int i = *num - '0';
                printf("%s ", i ? afterTwenty[i] : "");
                ++num;
                if (*num != '0')
                    printf("%s ", digits[*num - '0']);
            }
        }
        ++num;
    }
}

void primeNums (int max) {
    for (int i = 2; i <= max; i++) {
        int isPrime = 1;

        for (int j = 2; j < i/2; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime) {
            printf("%d ", i);
        }
    }
}


int main() {

    int num;
    scanf("%d", &num);
    primeNums (num);

    convert("19");
    convert("40");
    convert("43");
    convert("20");
    convert("21");
    convert("100");

    return 0;
}



