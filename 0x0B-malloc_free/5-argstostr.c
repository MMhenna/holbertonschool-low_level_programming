#include "holberton.h"
#include <stdlib.h>

/**
 *argstostr -  concate arguments
 *@ac: nbr of arguments
 *@av: arguments
 * Return: success
 **/

char *argstostr(int ac, char **av)
{
	int i, j, counter = 0, k = 0;
	char *ptr;

	if (ac == 0 || av ==  NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			counter++;
	}

	ptr = malloc(sizeof(char) * counter + ac + 1);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			ptr[k] = av[i][j];
			k++;
		}
		ptr[k] = '\n';
		k++;
	}
	ptr[k] = '\0';
	return (ptr);
}
