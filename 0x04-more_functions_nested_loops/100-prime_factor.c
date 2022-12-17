#include <stdio.h>
/**
 * main - entry point of the function
 * Return: Always 0
 */
int main(void)
{
	unsigned long int a = 3, s = 612852475143;

	for (; a < 12057; a += 2)
	{
		while (s % a == 0 && s != a)
			s /= a;
	}
	printf("%lu\n", s);
	return (0);
}
