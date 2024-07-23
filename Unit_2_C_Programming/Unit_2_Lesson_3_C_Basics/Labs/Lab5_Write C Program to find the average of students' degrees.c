/*
 ============================================================================
 Author      : Mario Adel
 Description : Find the average of some values
 ============================================================================
 */

#include <stdio.h>

int main(void) {
	int students, i;
	float degree, sum = 0, avg;
	printf("Enter the number of students : ");
	fflush(stdout);
	scanf("%d",&students);
	fflush(stdin);
	for (i = 1; i <= students; i++)
	{
		printf("Enter student (%d) degree : ",i);
		fflush(stdout);
		scanf("%f",&degree);
		fflush(stdin);
		sum += degree;
	}
	avg = sum/students;
	printf("Average student's degree is : %f", avg);
	return 0;
}
