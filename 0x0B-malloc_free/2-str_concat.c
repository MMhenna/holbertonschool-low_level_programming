#include "holberton.h"
#include <stdlib.h>

/**
 *str_concat - concat two string using malloc
 *@s1: string 1
 *@s2: string 2
 * Return: success
 **/

char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0;
	char *ptr;
	char *concatptr;

	if (s1 != NULL)
	{
		while (s1[i] != '\0')
			i++;
	}

	if (s2 != NULL)
	{
		while (s2[j] != '\0')
			j++;
	}

	ptr = malloc(sizeof(char) * ((i + j) + 1));

	if (ptr == NULL)
		return (NULL);

	/* Concate string(s) */

	concatptr = ptr;
	while (*s1)
	{
		*concatptr = *s1;
		concatptr++;
		s1++;
	}
	while (*s2)
	{
		*concatptr = *s2;
		concatptr++;
		s2++;
	}

	*concatptr = '\0';
	return (ptr);
}
