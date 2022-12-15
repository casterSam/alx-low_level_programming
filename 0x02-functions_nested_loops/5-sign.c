#include "main.h"
/**
 * print_sign - The entry point of the program
 * @n: The number argument to be checked
 * Description: print_sign the sign of a number.
 * Return: signval
 */
int print_sign(int n)
{
	int signval;

	if (n > 0)
	{
		signval = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		signval = 0;
		_putchar('0');
	}
	else
	{
		signval = -1;
		_putchar('-');
	}
	return (signval);
}
