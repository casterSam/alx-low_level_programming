#include "main.h"
/**
 * print_square - This function prints a square
 * @s: An input integer
 * Return: Always 0.
 */
void print_square(int s)
{
	int a, b;

	if (s > 0)
	{
		for (a = 0; a < s; a++)
		{
			for (b = 0; b < s; b++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
