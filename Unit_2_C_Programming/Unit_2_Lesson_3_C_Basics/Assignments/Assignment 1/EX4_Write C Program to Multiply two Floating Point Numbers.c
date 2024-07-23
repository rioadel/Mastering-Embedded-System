/*
 ============================================================================
 Author      : Mario Adel
 Description : Multiplying two integers
 ============================================================================
 */

#include <stdio.h>

int main(void) {
	float first_number, second_number;
	printf("Enter two numbers: ");
	fflush(stdout);
	scanf("%f %f", &first_number, &second_number);
	printf("Product: %f", first_number * second_number);
	return 0;
}
