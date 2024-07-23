/*
 ============================================================================
 Author      : Mario Adel
 Description : Print a number pattern
 ============================================================================
 */

#include <stdio.h>

int main(void) {

	int rows, i, j;
	rows = 10;
	for(i = 0 ; i < rows ; i++) // outer loop
	{
		for(j = i; j < rows; j++) //inner loop
		{
			printf("%d ", j);

		}
		printf("\n");
	}
	return 0;
}
