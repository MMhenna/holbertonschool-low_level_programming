#include "holberton.h"
#include <stdio.h>

/**
 * print_binary - Converters an unsigned long int to binary number
 * @n: The number to be converted
 *
 * Return: Successful
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');

	else
	{
		print_binary(n >> 1);

		if ((n & 1) == 1)
			_putchar('1');
		if ((n & 1) == 0)
			_putchar('0');
	}
}
