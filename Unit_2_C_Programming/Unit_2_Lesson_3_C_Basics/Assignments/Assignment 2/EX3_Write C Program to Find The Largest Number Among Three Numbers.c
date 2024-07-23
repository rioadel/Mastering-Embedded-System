/*
 ============================================================================
 Author      : Mario Adel
 Description : Print the largest number among three numbers
 ============================================================================
 */

#include <stdio.h>

int main(void) {
	float first_num, second_num, third_num;
	printf("Enter three numbers: ");
	fflush(stdout);
	scanf("%f %f %f", &first_num, &second_num, &third_num);
	fflush(stdin);
	if (first_num > second_num)
	{
		if(first_num > third_num)
			printf("Largest number = %0.2f", first_num);
		else
			printf("Largest number = %0.2f", third_num);
	}
	else
	{
		if(second_num > third_num)
					printf("Largest number = %0.2f", second_num);
				else
					printf("Largest number = %0.2f", third_num);
	}
	return 0;
}
