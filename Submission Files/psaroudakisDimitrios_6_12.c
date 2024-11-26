#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int input_arr;
	char symbol_input;
	int i = 0;
	printf("What symbol would you like to use?: ");
	scanf("%c%*c", &symbol_input);
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
	return 0;
}