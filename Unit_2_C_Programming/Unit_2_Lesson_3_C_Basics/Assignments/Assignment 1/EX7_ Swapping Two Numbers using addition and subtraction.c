/*
 ============================================================================
 Author      : Mario Adel
 Description : Swapping two numbers using addition and subtraction
 ============================================================================
 */

#include <stdio.h>

int main(void) {
	float a, b;
	printf("Enter value of a: ");
	fflush(stdout);
	scanf("%f",&a);
	fflush(stdin);
	printf("Enter value of b: ");
	fflush(stdout);
	scanf("%f",&b);
	fflush(stdin);
	a = a + b;
	b = a - b;
	a = a - b;
	printf("\nAfter swapping, value of a: %0.2f \n",a);
	fflush(stdout);
	printf("After swapping, value of b: %0.2f",b);
	fflush(stdout);

	return 0;
}
