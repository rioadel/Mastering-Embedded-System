/*
 ============================================================================
 Author      : Mario Adel 
 Description : Mini-Calculator
 ============================================================================
 */

#include <stdio.h>

int main(void) {
	char operator;
	float first_operand, second_operand;
	printf("Enter operator either + or - or * or / : ");
	fflush(stdout);
	scanf("%c",&operator);
	fflush(stdin);
	switch(operator)
	{
	case '+':
		printf("Enter two operands: ");
		fflush(stdout);
		scanf("%f %f", &first_operand, &second_operand);
		fflush(stdin);
		printf("%0.1f + %0.1f = %0.1f",first_operand, second_operand, first_operand + second_operand);
		break;
	case '-':
		printf("Enter two operands: ");
		fflush(stdout);
		scanf("%f %f", &first_operand, &second_operand);
		fflush(stdin);
		printf("%0.1f - %0.1f = %0.1f",first_operand, second_operand, first_operand - second_operand);
		break;
	case '*':
		printf("Enter two operands: ");
		fflush(stdout);
		scanf("%f %f", &first_operand, &second_operand);
		fflush(stdin);
		printf("%0.1f * %0.1f = %0.1f",first_operand, second_operand, first_operand * second_operand);
		break;
	case '/':
		printf("Enter two operands: ");
		fflush(stdout);
		scanf("%f %f", &first_operand, &second_operand);
		fflush(stdin);
		if(second_operand == 0)
			printf("Can not divide by zero");
		else
			printf("%0.1f / %0.1f = %0.1f",first_operand, second_operand, first_operand / second_operand);
		break;
	default:
		printf("Invalid operator");
		break;
	}
	return 0;
}
