/*
 ============================================================================
 Author      : Mario Adel
 Description : Printing ASCII value of a character
 ============================================================================
 */

#include <stdio.h>

int main(void) {

	char character;
	printf("Enter a character: ");
	fflush(stdout);
	scanf("%c",&character);
	printf("ASCII value of %c = %d", character, character);
	return 0;
}
