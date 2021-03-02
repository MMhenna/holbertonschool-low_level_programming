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
	int i = 0, j = 0, v = 0, w = 0;
	char *ptr;

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


	while (v < i)
	{
		ptr[v] = s1[v];
		v++;
	}
	while (v < i + j)
	{
		ptr[v] = s2[w];
		v++;
		w++;
	}

	ptr[v] = '\0';
	return (ptr);
}
