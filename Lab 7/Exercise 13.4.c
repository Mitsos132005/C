#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define IS_CAPITAL(input) ((input >= 'A' && (input) <= 'Z' ? 1 : 0))
#define IS_SMALL(input) ((input >= 'a' && (input) <= 'z' ? 1 : 0))

int main(void)
{
    char input;
    printf("Enter a letter: ");
    scanf("%c", &input);
    printf("Is %c a capital letter: %d\n", input, IS_CAPITAL(input));
    printf("Is %c a small letter: %d", input, IS_SMALL(input));
}