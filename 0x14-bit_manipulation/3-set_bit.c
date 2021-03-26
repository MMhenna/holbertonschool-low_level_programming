#include "holberton.h"
#include <stdio.h>

/**
 * set_bit - Set the value 1 at a given index.
 * @n: The number to set in.
 * @index: Position of the bit to set.
 *
 * Return: The value of a bit at a given index.
 */

int set_bit(unsigned long int *n, unsigned int index)
{

	if (index > (sizeof(n) * 8))
		return (-1);
	*n = *n | (1 << index);
	return (*n);
}
