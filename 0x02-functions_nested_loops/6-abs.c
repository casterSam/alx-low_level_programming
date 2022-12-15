#include "main.h"
/**
 * _abs - The entry point of the program
 * @x: The argument to be evaluated
 * Description: _abs function that computes the absolute value of an
 * Return: abs_value
 */
int _abs(int x)
{
	int abs_value;

	if (x < 0)
		abs_value = -1 * x;
	else
		abs_value = x;
	return (abs_value);
}
