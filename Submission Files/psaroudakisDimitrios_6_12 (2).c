#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void draw_bar(char symbol_input) {
	int input_arr;
	int i = 0;
	printf("Enter scores: ");
	scanf("%d%*c", &input_arr);
	while (input_arr >= 0) {
		printf("score = %d      ", input_arr);
		for (int j = 0; j < input_arr; j++) {
			printf("%c", symbol_input);
		}
		printf("\n");
		scanf("%d%*c", &input_arr);
	}
}

int main(void) {
	char symbol_input;
	printf("What symbol would you like to use?: ");
	scanf("%c%*c", &symbol_input);
	draw_bar(symbol_input);
	return 0;
}