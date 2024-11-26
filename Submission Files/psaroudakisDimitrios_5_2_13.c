#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	float num_1, num_2, sum, diff, mult, quo;
	char op;
	printf("Enter an expression (without spaces!): ");
	scanf("%f%c%f%*c", &num_1, &op, &num_2);
	switch (op) {
	case '+':
		sum = num_1 + num_2;
		printf("Their sum is %.2f", sum);
		break;
	case '-':
		diff = num_1 - num_2;
		printf("Their difference is %.2f", diff);
		break;
	case '*':
		mult = num_1 * num_2;
		printf("Their multiplier is %.2f", mult);
		break;
	case '/':
		quo = num_1 / num_2;
		printf("Their quotient is %.2f", quo);
		break;
	default:
		printf("No such valid operator please try again");
		break;
	}
	return 0;
}