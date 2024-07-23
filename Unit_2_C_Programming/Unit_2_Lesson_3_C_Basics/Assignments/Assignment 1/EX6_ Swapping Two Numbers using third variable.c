/*
 ============================================================================
 Author      : Mario Adel
 Description : Swapping two numbers using third variable
 ============================================================================
 */

#include <stdio.h>

int main(void) {

	float a, b, temp;
	printf("Enter value of a: ");
	fflush(stdout);
	scanf("%f",&a);
	fflush(stdin);
	printf("Enter value of b: ");
	fflush(stdout);
	scanf("%f",&b);
	fflush(stdin);
	temp = a;
	a = b;
	b = temp;
	printf("\nAfter swapping, value of a: %0.2f \n",a);
	fflush(stdout);
	printf("After swapping, value of b: %0.1f",b);
	fflush(stdout);

	return 0;
}
