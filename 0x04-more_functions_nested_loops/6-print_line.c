#include "main.h"
/**
 * print_line - This functiopn prints a straight line
 * @s: An input integer
 * Return: Always 0.
 */
void print_line(int s)
{
	int i = 0;

	if (s > 0)
	{
		for (; i < s; i++)
			_putchar('_');
	}
	_putchar('\n');
}
