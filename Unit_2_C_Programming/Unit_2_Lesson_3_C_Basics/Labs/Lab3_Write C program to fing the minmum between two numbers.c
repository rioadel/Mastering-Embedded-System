/*
 ============================================================================
 Author      : Mario Adel
 Description : Find the minimum number
 ============================================================================
 */

#include <stdio.h>


int main(void) {
	float a,b, min;
	printf("Enter two values : ");
	fflush(stdout);
	scanf("%f %f",&a,&b);
	fflush(stdin);
	min = (a<b)?a:b;
	printf("The minimum number is : %f", min);
	return 0;
}
