/*
 ============================================================================
 Author      : Mario Adel
 Description : Swapping two numbers using xor operation
 ============================================================================
 */

#include <stdio.h>

int main(void) {
	int a, b;
	printf("Enter value of a: ");
	fflush(stdout);
	scanf("%d",&a);
	fflush(stdin);
	printf("Enter value of b: ");
	fflush(stdout);
	scanf("%d",&b);
	fflush(stdin);
	// Xor Swapping is just for integers
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("\nAfter swapping, value of a: %d \n",a);
	fflush(stdout);
	printf("After swapping, value of b: %d",b);
	fflush(stdout);

	return 0;
}
