#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define MAXSTRING 100

void PrintString(char *p);

int main(void)
{
	char s1[MAXSTRING], s2[MAXSTRING];
	strcpy(s1, "Mary, Mary, quite contrary.\n");
	strcpy(s2, "How does your garden grow?\n");
	PrintString(s1);
	PrintString(s2);
	strcat(s1, s2);
	PrintString(s1);
	return 0;
}

void PrintString(char *p)
{
	while (*p != '\0') {
		putchar(*p);
		p++;
	}
}