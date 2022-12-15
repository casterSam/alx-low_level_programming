#include "main.h"
/**
 * void - starts the program
 * declaration: print_alphabet_x10 function prints 10 times the alphabet, in lowercase, followed by a new line.
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int loopcount;
	char lowercase_alphabet;
	loopcount = 0;
	while (loopcount < 10)
	{
		lowercase_alphabet = 'a';
		while (lowercase_alphabet <= 'z')
		{
		_putchar(lowercase_alphabet);
		lowercase_alphabet++;
		}
	_putchar('\n');
	loopcount++;
	}
}
