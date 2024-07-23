/*
 ============================================================================
 Author      : Mario Adel
 Description : Summation of Values between 1 and 99
 ============================================================================
 */

#include <stdio.h>

int main(void) {
	int i, sum = 0;
	for (i = 0; i < 100; i++)
	{
		sum+=i;
	}
	printf("Summation of values between (1 and 99) is : %d", sum);
	return 0;
}
