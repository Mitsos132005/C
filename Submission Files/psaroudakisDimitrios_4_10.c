#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int days, days_extra, hours, minutes, seconds, seconds_rem;
	printf("Please input seconds: ");
	scanf("%d%*c", &seconds);
	days = seconds / 86400;
	days_extra = days * 24;
	if (days >= 1) {
		hours = (seconds / 3600) - (days * 24);
	}
	else {
		hours = (seconds / 3600);
	}
	minutes = (seconds % 3600) / 60;
	seconds_rem = ((seconds % 3600) % 60);
	if (seconds < 86400) {
		printf("%d second(s) is 0 days %d hour(s) %d minute(s) and %d second(s)", seconds, hours, minutes, seconds_rem);
	}
	else {
		printf("%d second(s) is %d day(s) %d hour(s) %d minute(s) and %d second(s)", seconds, days, hours, minutes, seconds_rem);
	}
	return 0;
}