#include "holberton.h"

/**
 *reverse_array - reverse array
 *@a: array
 *@n: lenght of array
 * Return: success
 **/

void reverse_array(int *a, int n)
{
	int i, k;

	for (i = 0; i <= n / 2; i++)
	{
		k = a[i];
		a[i] = a[(n - 1) - i];
		a[(n - 1) - i] = k;
	}
}
