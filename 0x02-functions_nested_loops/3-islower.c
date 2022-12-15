#include "main.h"
/**
 *  _islower - The entry point of the function
 *  description: _islower function  checks for lowercase character.
 *  @c: The character to be checked
 *  Return: islower_n value
 */
int _islower(int c)
{
	char lowercase_alphabet = 'a';
	int islower_n = 0;

	while (lowercase_alphabet <= 'z')
	{
		if (lowercase_alphabet == c)
			islower_n = 1;
		lowercase_alphabet++;
	}
	return (islower_n);
}
