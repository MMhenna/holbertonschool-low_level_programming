#include "holberton.h"

/**
 *print_line - print _ n times
 *@n: the int from parameter
 * Return: success
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= n; i++)
			_putchar('_');
	_putchar('\n');
	}

}







