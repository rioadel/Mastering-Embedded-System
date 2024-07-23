/*
 ============================================================================
 Author      : Mario Adel
 Description : Print integer number entered by user
 ============================================================================
 */

#include <stdio.h>

int main(void) {
	int number;
	printf("Enter an integer: ");
	fflush(stdout);
	scanf("%d", &number);
	fflush(stdin);
	printf("You entered: %d", number);
	return 0;
}
