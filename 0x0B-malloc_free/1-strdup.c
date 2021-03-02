#include "holberton.h"
#include <stdlib.h>

/**
 *_strdup - duplicate string using malloc
 *@str: string to duplicate
 * Return: success
 **/

char *_strdup(char *str)
{
	int i = 0;
	char *ptr;
	char *copyptr;

	if (str == NULL)
		return (NULL);

	/* Allocate memory */

	while (str[i] != '\0')
		i++;

	ptr = malloc(sizeof(char) * i + 1);

	if (ptr == NULL)
		return (NULL);

	/* Copy string */

	copyptr = ptr;
	while (*str)
	{
		*copyptr = *str;
		copyptr++;
		str++;
	}

	*copyptr = '\0';
	return (ptr);
}
