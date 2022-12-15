#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - The entry point of the function
 * @x: A input integer
 * Description: This is a function that prints all natural numbers
 */
void print_to_98(int x)
{
	if (x <= 98)
	{
		while (x <= 98)
		{
			if (x != 98)
				printf("%d, ", x);
			else
				printf("%d", x);
			x++;
		}
	}
	else
	{
		while (x >= 98)
		{
			if (x != 98)
				printf("%d, ", x);
			else
				printf("%d", x);
			x--;
		}
	}
	printf("\n");
}
