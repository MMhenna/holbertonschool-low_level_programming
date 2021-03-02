#include "holberton.h"
#include <stdlib.h>

/**
 *create_array - create array usin malloc
 *@size: size of array
 *@c: first caracter in array
 * Return: success
 **/

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	ptr = malloc(size * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ptr[i] = c;

	ptr[i] = '\0';

	return (ptr);
}
