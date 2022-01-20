#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void calc(int days) {
	int years = days / 365;
	int months = (days % 365) / 30;
	int days_left = (days % 365) % 30;

	printf(
		"\n%d days is:\n%d years\n%d months\n%d days\n\n",
		days, years, months, days_left
	);
}

int main(int argc, char *argv[]) {
	calc(atoi(argv[1])); //* atoi = ASCII to int
}
