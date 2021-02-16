#include "holberton.h"

/**
 *puts2 - print some f string
 *@str: the string from parameter
 * Return: success
 **/

void puts2(char *str)
{
	int i = 0, j;

	while (str[i] != '\0')
	{
		i++;
	}

	for (j = 0; j < i; j++)
	{
		if (j % 2 == 0)
			_putchar(str[j]);
	}
	_putchar('\n');
}
