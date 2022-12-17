#include "main.h"
/**
 * print_triangle - This functions prints a triangle followed by a new line
 * @s: An input integer
 * Return: Always 0
 */
void print_triangle(int s)
{
	int a = 0, b, n = s - 1;

	if (s > 0)
	{
		for (; a < s; a++)
		{
			for (b = 0; b < s; b++)
			{
				if (b < n)
					_putchar(' ');
				else
					_putchar('#');
			}
			n--;
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
