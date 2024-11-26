#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_SIZE 10

int compare(const void *a, const void *b) {
	return (*(int*)a - *(int*)b);
}

void ReadIntegers(int IntegerList[MAX_SIZE]) {
	printf("Enter 9 inetgers in ascending order:\n");
	for (int i = 0; i < MAX_SIZE; i++) {
		printf("Integer %d:", i);
		scanf("%d%*c", &IntegerList[i]);
		if (i > 0 && IntegerList[i] < IntegerList[i - 1]) {
			printf("Error: Integers weren't inserted in ascending order, please try again...");
			exit(1);
		}
	}
}

void TenthInteger(int IntegerList[MAX_SIZE]) {
	printf("Integer 10: ");
	scanf("%d", &IntegerList[MAX_SIZE]);
}

void SortList(int IntegerList[MAX_SIZE]) {
	qsort(IntegerList, MAX_SIZE, sizeof(int), compare);
}

void PrintList(int IntegerList[MAX_SIZE]) {
	for (int i = 0; i <= MAX_SIZE; i++) {
		printf("Integer %d: %d\n", i, IntegerList[i]);
	}
}

int main(void) {
	int IntegerList[MAX_SIZE];
	ReadIntegers(IntegerList);
	TenthInteger(IntegerList);
	SortList(IntegerList);
	PrintList(IntegerList);
	return 0;
}