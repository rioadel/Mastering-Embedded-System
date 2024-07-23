/*
 ============================================================================
 Author      : Mario Adel
 Description : Find the largest number
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float first_number,second_number,third_number;
	printf("Enter Three Values : ");
	fflush(stdout);
	scanf("%f %f %f",&first_number,&second_number,&third_number);
	fflush(stdin);
	if (first_number > second_number)
	{
		if(first_number > third_number)
		{
			printf("The largest value is : %f", first_number);
		}
		else
		{
			printf("The largest value is : %f", third_number);
		}
	}
	else
		{
			if(second_number > third_number)
			{
				printf("The largest value is : %f", second_number);
			}
			else
			{
				printf("The largest value is : %f", third_number);
			}
		}
	return 0;
}
