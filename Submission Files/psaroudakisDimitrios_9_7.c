#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_ROWS 10
#define MAX_COLLUMNS 100

void PrintArray(char NameList[][MAX_COLLUMNS], int p) {
	for (int i = 0; i < p; i++) {
		printf("Name %d: %s\n", i + 1, NameList[i]);
	}
}

char ReadArray(char NameList[][MAX_COLLUMNS], int *p) {
	printf("Enter a list of names\n After each name press enter to enter a new one\n Enter the word \"End\" if you want to finish the list\n Maximum 10 names\n");
	for (int i = 0; i < MAX_ROWS; i++) {
		printf("Enter name %d: ", i + 1);
		gets(NameList[i]);
		if (strcmp(NameList[i], "End") == 0) {
			NameList[i][0] = '\0';
			*p = i;
			break;
		}
	}
}

int main(void) {
	char NameList[MAX_ROWS][MAX_COLLUMNS];
	int i = 0;
	int *p = &i;
	ReadArray(NameList, p);
	PrintArray(NameList, *p);
	return 0;
}