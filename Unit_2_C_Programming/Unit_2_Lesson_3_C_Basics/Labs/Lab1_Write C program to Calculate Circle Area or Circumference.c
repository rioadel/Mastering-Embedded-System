/*
 ============================================================================
 Author      : Mario Adel
 Description : Calculate circle area or circumference
 ============================================================================
 */

#include "stdio.h"

int main()
{
	float radius;
	char option;
	printf("Please Enter Circle radius :");
	fflush(stdout);
	scanf("%f",&radius);
	fflush(stdin);
	printf("Please Enter your choice (a to print the area, or c to print circumference) :");
	fflush(stdout);
	scanf("%c",&option);
	fflush(stdin);
	if (option == 'a')
	{
		printf("area is : %f \n", 3.14*radius*radius);
	}
	else if (option == 'c')
	{
		printf("circumference is : %f \n",  2*3.14*radius);
	}
	else
	{
		printf("Incorrect option \n");
	}
	return 0;
}
