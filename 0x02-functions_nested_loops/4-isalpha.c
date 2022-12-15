#include "main.h"
/**
 *  _isalpha - entry point of the function
 *  @c: The argument to be checked
 *  Description:_isalpha function that checks for alphabetic character.
 *  Return: isletter_n value
 */
int _isalpha(int c)
{
	char lowercase_a, uppercase_a;
	int isletter_n = 0;

	lowercase_a = 'a';

	while (lowercase_a <= 'z')
	{
		uppercase_a = 'A';

		while (uppercase_a <= 'Z')
		{
			if (c == lowercase_a || c == uppercase_a)
				isletter_n = 1;
			uppercase_a++;
		}
		lowercase_a++;
	}
	return (isletter_n);
}
