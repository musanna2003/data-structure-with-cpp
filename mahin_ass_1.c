#include <stdio.h>

char *ones[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
char *teens[] = {"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen",
                 "sixteen", "seventeen", "eighteen", "nineteen"};
char *tens[] = {"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};

int isDigit(char c) {
    return (c >= '0' && c <= '9');
}

void numToWords(int num) {
    if (num >= 100) {
        printf("%s hundred", ones[num / 100]);
        num %= 100;
        if (num != 0) printf(" ");
    }
    if (num >= 20) {
        printf("%s", tens[num / 10]);
        num %= 10;
        if (num != 0) printf(" %s", ones[num]);
    } else if (num >= 10) {
        printf("%s", teens[num - 10]);
    } else if (num > 0) {
        printf("%s", ones[num]);
    } else if (num == 0) {
        printf("zero");
    }
}

int strToInt(char str[], int len) {
    int num = 0;
    for (int i = 0; i < len; i++) {
        num = num * 10 + (str[i] - '0');
    }
    return num;
}

int main() {
    char input[1000];
    fgets(input, sizeof(input), stdin);

    int i = 0;

    while (input[i] != '\0') {
        if (isDigit(input[i])) {
            char numStr[10];
            int k = 0;
            while (isDigit(input[i])) {
                numStr[k++] = input[i++];
            }
            int number = strToInt(numStr, k);
            numToWords(number);
        } else {
            putchar(input[i]);
            i++;
        }
    }

    return 0;
}