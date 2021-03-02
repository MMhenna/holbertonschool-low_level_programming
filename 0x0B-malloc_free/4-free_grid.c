#include "holberton.h"
#include <stdlib.h>

/**
 *free_grid -  free 2d array
 *@grid: adresse of ad array
 *@height: height of 2d array
 * Return: success
 **/

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
