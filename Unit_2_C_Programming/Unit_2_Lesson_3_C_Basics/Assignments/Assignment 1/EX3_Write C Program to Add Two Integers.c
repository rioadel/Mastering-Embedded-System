/*
 ============================================================================
 Author      : Mario Adel
 Description : Adding two integers 
 ============================================================================
 */

#include <stdio.h>

int main(void) {

	int first_number, second_number;
	printf("Enter two integers: ");
	fflush(stdout);
	scanf("%d %d",&first_number, &second_number);
	printf("Sum: %d", first_number + second_number);
	return 0;
}
