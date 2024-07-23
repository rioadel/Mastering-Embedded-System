/*
 ============================================================================
 Author      : Mario Adel
 Description : Calculate summation of natural numbers
 ============================================================================
 */

#include <stdio.h>

int main(void) {
	int number, i, sum = 0;
	printf("Enter an integer: ");
	fflush(stdout);
	scanf("%d",&number);
	fflush(stdin);
	for(i = 0; i <= number; i++)
		sum += i;
	printf("Sum = %d", sum);
	return 0;
}
