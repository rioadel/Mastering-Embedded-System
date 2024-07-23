/*
 ============================================================================
 Author      : Mario Adel
 Description : Checking Character whether it is vowel or consonant
 ============================================================================
 */

#include <stdio.h>

int main(void) {
	char character;
	printf("Enter an alphabet: ");
	fflush(stdout);
	scanf("%c",&character);
	fflush(stdin);
	switch(character)
	{
	case 'a':
	case 'A':
		printf("%c is a vowel", character); break;
	case 'i':
	case 'I':
			printf("%c is a vowel", character); break;
	case 'e':
	case 'E':
			printf("%c is a vowel", character); break;
	case 'o':
	case 'O':
			printf("%c is a vowel", character); break;
	case 'u':
	case 'U':
			printf("%c is a vowel", character); break;
	default :
			printf("%c is a consonant", character); break;
	}
	return 0;
}
