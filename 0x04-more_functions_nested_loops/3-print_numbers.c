#include "main.h"
/**
 * print_numbers - print the numbers 0 to 9
 * followed by new line
 * Return: Always 0
 */
void print_numbers(void)
{
	int i = '0';

	for (; i <= '9'; i++)
		_putchar(i);
	_putchar('\n');
}
