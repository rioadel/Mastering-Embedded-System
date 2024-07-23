/*
 ============================================================================
 Author      : Mario Adel
 Description : Calculate Number Factorial
 ============================================================================
 */

#include <stdio.h>

int main(void) {
	int number, i, factorial = 1;
	printf("Enter an integer: ");
	fflush(stdout);
	scanf("%d",&number);
	fflush(stdin);
	if (number > 0)
	{
	for(i = 1; i <= number; i++)
		factorial *= i;
	printf("Factorial = %d", factorial);
	}
	else if (number == 0)
		printf("Factorial = 0");
	else
		printf("Error!!! Factorial of negative number doesn't exist.");
	return 0;
}
