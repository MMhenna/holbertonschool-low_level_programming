#include "holberton.h"

/**
 *print_rev - print string s reverse
 *@s: the string from parameter
 * Return: success
 **/

void print_rev(char *s)
{
	int i = 0, j;

	while (s[i] != '\0')
	{
		i++;
	}

	for (j = i; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}

