#include "main.h"
/**
 * _isupper - The function that checks for uppercase character.
 * @c: An input character
 * Return: 1 suppose a uppercase
 */
int _isupper(int a)
{
	char uppercase = 'A';
	int isupper = 0;

	for (; uppercase <= 'Z'; uppercase++)
	{
		if (a == uppercase)
		{
			isupper = 1;
			break;
		}
	}
	return (isupper);
}
