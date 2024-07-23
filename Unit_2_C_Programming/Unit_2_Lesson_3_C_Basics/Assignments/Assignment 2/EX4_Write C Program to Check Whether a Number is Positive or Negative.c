/*
 ============================================================================
 Author      : Mario Adel
 Description : Check a number whether it is positive or negative
 ============================================================================
 */

#include <stdio.h>

int main(void) {
	float number;
	printf("Enter a number: ");
	fflush(stdout);
	scanf("%f", &number);
	fflush(stdin);
	if (number > 0)
		printf("%0.2f is positive.", number);
	else if (number < 0)
		printf("%0.2f is negative.", number);
	else
		printf("You entered zero.");
	return 0;
}
