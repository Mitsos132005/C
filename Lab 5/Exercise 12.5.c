#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void PrintBinary(short int number) {
    int bits = sizeof(short int) * 8;
    printf("Output: ");
    for (int i = bits - 1; i >= 0; i--) {
        int bit = (number >> i) & 1;
        printf("%d", bit);
        if (i % 4 == 0 && i != 0) {
            printf(" ");
        }
    }
    printf("\n");
}

int main() {
    short int number;
    printf("Input: ");
    scanf("%hd", &number);
    PrintBinary(number);
    return 0;
}
