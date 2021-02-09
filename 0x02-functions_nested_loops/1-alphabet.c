#include "holberton.h"

/**
 * print_alphabet - prints the alphabet, in lowercas using _putchar function
 */

void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);

	_putchar('\n');
}

