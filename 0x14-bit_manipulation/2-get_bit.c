#include "holberton.h"
#include <stdio.h>

/**
 * get_bit - Give the value of a bit at a given index.
 * @n: The number to search in.
 * @index: Position of the bit.
 *
 * Return: The value of a bit at a given index.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int r;

	if (index > (sizeof(n) * 8))
		return (-1);

	n = n >> index;
	r = n & 1;
	return (r);

}
