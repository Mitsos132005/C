#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include <ctype.h>
#define STRING_LENGTH 100

int isPalindrome(const char* str) {
    int left = 0;
    int right = strlen(str) - 1;
    while (left < right) {
        while (left < right && !isalnum(str[left])) {
            left++;
        }
        while (left < right && !isalnum(str[right])) {
            right--;
        }
        if (tolower(str[left]) != tolower(str[right])) {
            return 0; 
        }
        left++;
        right--;
    }
    return 1; 
}

int main() {
    char str1[STRING_LENGTH];
    printf("Enter a sentence to check if it's a palindrome: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = 0;
    if (isPalindrome(str1)) {
        printf("\"%s\" is a palindrome.\n", str1);
    }
    else {
        printf("\"%s\" isn't a palindrome.\n", str1);
    }
    return 0;
}
