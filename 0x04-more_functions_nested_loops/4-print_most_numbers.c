#include "main.h"
/**
 * print_most_numbers - This functions prints most number from 0-9
 * * Return: Always 0
 */
void print_most_numbers(void)
{
	int i = '0';

	for (; i <= '9'; i++)
	{
		if (i != '2' && i != '4')
			_putchar(i);
	}
	_putchar('\n');
}
