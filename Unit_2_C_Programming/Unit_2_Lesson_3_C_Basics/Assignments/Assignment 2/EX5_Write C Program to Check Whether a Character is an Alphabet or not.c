/*
 ============================================================================
 Author      : Mario Adel
 Description : Check a character whether it is alphabet or not
 ============================================================================
 */

#include <stdio.h>

int main(void) {
	char character;
	printf("Enter a character: ");
	fflush(stdout);
	scanf("%c",&character);
	fflush(stdin);
	// ASCII code A = 65 , Z = 90 , a = 97 , z = 122
 	if ((character >= 65) && (character <= 90))
		printf("%c is an alphabet", character);
	else if ((character >= 97) && (character <= 122))
		printf("%c is an alphabet", character);
	else
		printf("%c is not an alphabet", character);
	return 0;
}
