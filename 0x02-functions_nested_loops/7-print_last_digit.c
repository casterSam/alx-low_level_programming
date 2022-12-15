#include "main.h"
/**
 * print_last_digit - The entry point of the program
 * @r: The number to be checked
 * Description: This is a function that prints the last digit of a number.
 * Return: last_dig
 */
int print_last_digit(int s)
{
	int last_dig;

	if (s < 0)
		last_dig = (s * -1) % 10;
	else
		last_dig = s % 10;
	_putchar(last_dig + '0');
	return (last_dig);
}
