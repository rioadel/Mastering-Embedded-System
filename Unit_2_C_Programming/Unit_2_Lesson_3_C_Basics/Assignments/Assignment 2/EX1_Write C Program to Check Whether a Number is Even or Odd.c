/*
 ============================================================================
 Author      : Mario Adel
 Description : Check number whether it is even or odd
 ============================================================================
 */

#include <stdio.h>

int main(void) {

	int number;
	printf("Enter an integer you want to check : ");
	fflush(stdout);
	scanf("%d",&number);
	fflush(stdin);
	if(number % 2 == 0)
		printf("%d is even", number);
	else
		printf("%d is odd", number);
	return 0;
}
