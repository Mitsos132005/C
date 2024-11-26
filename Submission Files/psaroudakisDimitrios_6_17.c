#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SQUARE_DIM 10

void empty_square() {
	for (int i = 0; i < SQUARE_DIM; i++) {
		for (int j = 0; j < SQUARE_DIM; j++) {
			if (i == 0 || i == SQUARE_DIM - 1 || j == 0 || j == SQUARE_DIM - 1) {
				printf("%c", 219);
			}
			else {
				printf(" ");
			}
		}
		printf("\n");
	}
}

void filled_square() {
	for (int j = 0; j < SQUARE_DIM; j++){
		for (int i = 0; i < SQUARE_DIM; i++) {
			printf("%c", 219);
		}
		printf("\n");
	}
}

int main(void) {
	int input;
	do {
		printf("What do you chose?\n     1. Draw an empty square\n     2. Draw a filled square\n     3. Stop\n");
		scanf("%d%*c", &input);
		switch (input) {
		case 1:
			empty_square();
			break;
		case 2:
			filled_square();
			break;
		case 3:
			break;
		default:
			printf("Bad input, try again");
			break;
		}
	} while (input != 3);
	return 0;
}