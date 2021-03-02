#include "holberton.h"
#include <stdlib.h>

/**
 *alloc_grid -  create 2d array usin malloc
 *@width: widht of 2d array
 *@height: height of 2d array
 * Return: success
 **/

int **alloc_grid(int width, int height)
{
	int **ptr;
	int i, j;

	if ((width <= 0) || (height <= 0))
		return (NULL);

	ptr = malloc(sizeof(int *) * height);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(sizeof(int *) * width);

		if (ptr[i] == NULL)
		{
			for (j = 1; j < i; j++)
				free(ptr[j]);
			free(ptr);
			return (NULL);
		}

		for (j = 0; j < width; j++)
			ptr[i][j] = 0;
	}
	return (ptr);
}
