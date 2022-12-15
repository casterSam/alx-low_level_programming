#include "main.h"
/**
 * void takes no parameters
 * Description:  This function prints lowercase alphabet
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char lowercase_alphabet='a';
		while (lowercase_alphabet <= 'z')
		{
			_putchar(lowercase_alphabet);
			lowercase_alphabet++;
		}
	_putchar('\n');
		
}
