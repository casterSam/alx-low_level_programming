#include "main.h"
/**
 * _isdigit - This function checks for a digit 0 throogh 9
 * @a: An input integer
 * return: isdigit if "a" is a digit (0 through 9)
 */
int _isdigit(int a)
{
	char i = '0';
	int isdigit = 0;

	for (; i <= '9'; i++)
	{
		if (i == a)
		{
			isdigit = 1;
			break;
		}
	}
	return (isdigit);
}
