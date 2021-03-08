#include "holberton.h"
#include <stdlib.h>

/**
 *strtow -  create tab of strings using malloc
 *@str: string from parameter
 * Return: success
 **/

char **strtow(char *str)
{
	int wordcounter = 0, charcounter = 0, i, j, k, bol = 0;
	char **ptr;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ' && str[i + 1] != ' ')
			wordcounter++;
	}

	ptr = malloc(sizeof(char *) * wordcounter);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < wordcounter; i++)
	{
		while (str[j] != '\0' && bol == 0)
		{
			if (str[j] == ' ')
				j++;
			if (str[j] != ' ' && str[j + 1] != ' ')
				charcounter++;
			if (str[j] != ' ' && str[j + 1] == ' ')
				charcounter++;
				ptr[i] = malloc(sizeof(char) * charcounter);

				if (ptr[i] == NULL)
				{
					for (k = 0; k < i; k++)
						free(ptr[k]);
					free(ptr);
					return (NULL);
				}
		}
	}
	return (ptr);
}
