#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int max(int numbers[10]) {
	int max = numbers[0];
	for (int i = 0; i < 10; i++) {
		if (max < numbers[i]) {
			max = numbers[i];
		}
	}
	return max;
}

int min(int numbers[10]) {
	int min = numbers[0];
	for (int i = 0; i < 10; i++) {
		if (min > numbers[i]) {
			min = numbers[i];
		}
	}
	return min;
}

int main(void) {
	int numbers[10];
	printf("Give me ten integer numbers: ");
	for (int j = 0; j < 10; j++) {
		scanf("%d%*c", &numbers[j]); //scans for ten integer numbers and stores them in an array
	}
	printf("The maximum number of your input is %d and the minimum is %d", max(numbers), min(numbers));
	return 0;
}