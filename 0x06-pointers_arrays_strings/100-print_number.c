#include "holberton.h"

/**
 *print_number - print number
 *@n: the number from parameter
 * Return: success
 */

void print_number(int n)
{
	char c;
	int res = 0;

	if (n < 0)
	{
		_putchar('-');
		c = (char)('0' - (n % 10));
		n /= -10;
	}
	else
	{
		c = (char)((n % 10) + '0');
		n /= 10;
	}

	while (n > 0)
	{
		res = res * 10 + (n % 10);
		n /= 10;
	}
	while (res > 0)
	{
		_putchar((res % 10) + '0');
		res /= 10;
	}
	_putchar(c);
}

