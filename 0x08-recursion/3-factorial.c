#include "holberton.h"

/**
 *factoriel - fact of integer
 *@n: integer 
 * Return: success
 **/

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
