#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	float numbers[6];
	printf("Give me six real numbers: ");
	for (int j = 0; j < 6; j++) {
		scanf("%f", &numbers[j]); //scans for six real numbers and stores them in an array

	}
	printf("---------------------------\n");
	for (int i = 0; i < 6; i++) {
		printf("| %10.2f ", numbers[i]); //sets the width of the output to ten and two decimals points, the ten can be adjusted for larger numbers 
		if ((i + 1) % 2 == 0) { //if we have two numbers printed already it closes the table with "|" and goes to a newline
			printf("|\n");
			printf("---------------------------\n");
		}
	}
	return 0;
} 