#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void tower_printer(int input) {
	for (int k = input; k > 0; k -= 2) {
		int shrink = (input - k) / 2;
		for (int i = 0; i < k; i++) {
			for (int j = 0; j < shrink; j++) {
				printf(" ");
			}
			for (int j = 0; j < k; j++) {
				printf("%c", 219);
			}
			printf("\n");
		}
	}
}

int main(void) {
	int input;
	char cont;
	printf("This program prints a tower upside down!");
	do {
		printf("How wide should the tower be?\n(Give an odd number between 3 and 15): ");
		scanf("%d%*c", &input);
		if ((input >= 3 && input <= 15) && (input % 2 != 0)) {
			tower_printer(input);
		}
		else {
			printf("Your input doesn't match the parameters please try again.\n");
		}
		printf("Do you want to build another tower? (y/n): ");
		scanf("%c%*c", &cont);
	} while (cont == 'y');
	return 0;
}