#include "main.h"
/**
 * times_table - program entry point
 * @void: The function takes no parameters
 * times_table function that prints the 9 times table
 */
void times_table(void)
{
	int num_a, num_b, result;

	num_a = 0;

	while (num_a <10)
	{
		num_b = 0;

		while (num_b < 10)
		{
			result = num_a * num_b;
			if (num_b != 9)
			{
				if ((result / 10) == 0)
				{
					_putchar(result + '0');
					_putchar(',');
					_putchar(' ');
				}
				else
				{
					_putchar((result / 10) + '0');
					_putchar((result % 10) + '0');
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{
				if ((result / 10) == 0)
					_putchar(result + '0');
				else
				{
					_putchar((result / 10) + '0');
					_putchar((result % 10) + '0');
				}
			}
			num_b++;
		}
		num_a++;
		_putchar('\n');
	}
}
