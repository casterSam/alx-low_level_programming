#include "main.h"
/**
 * print_diagonal - This function prints a diagnol line
 * @s: An input integer
 * Return: Always 0.
 */
void print_diagonal(int s)
{
	int a = 0, b;

	if (s > 0)
	{
		for (; a < s; a++)
		{
			for (b = 0; b < a; b++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
