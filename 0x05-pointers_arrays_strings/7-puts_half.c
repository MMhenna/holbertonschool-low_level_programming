#include "holberton.h"

/**
 *puts_half - print half of string
 *@str: the string from parameter
 * Return: success
 **/

void puts_half(char *str)
{
	int i = 0, j;

	while (str[i] != '\0')
	{
		i++;
	}
	if (i % 2 == 0)
	{
		for (j = i / 2; j < i; j++)
			_putchar(str[j]);
	}
	else
	{
		for (j = (i + 1) / 2; j < i; j++)
			_putchar(str[j]);
	}
	_putchar('\n');
}
