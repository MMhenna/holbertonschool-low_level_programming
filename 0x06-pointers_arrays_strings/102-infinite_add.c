#include "holberton.h"

/**
 *infinite_add - add two numbers in strings
 *@n1: string in parameter
 *@n2: string in parameter
 *@r: string to store the result
 *@size_r: size of r
 * Return: success
 **/

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, j = 0, c = 0, res = 0, k = 0;

	while (n1[i] != '\0')
		i++;
	while (n2[j] != '\0')
		j++;
	i -= 1;
	j -= 1;
	while ((i != 0) && (j != 0))
	{
		res = int(n1[i] + n2[j]) + k;
		if (res >= 10)
		{
			k = res / 10;
			res %= 10;
			r = res;
		}
	i--;
	j--;
	}
	if ((i == 0) && (j != 0))
		while (j != 0)
		{
			res = int(n2[j]) + k;
			if (res >= 10)
			{
				k = res / 10;
				res %= 10;
				r = char(res);
			}

		}
	if ((i != 0) && (j == 0))
		while (i != 0)
		{
			res = int(n1[i]) + k;
			if (res >= 10)
			{
				k = res / 10;
				res %= 10;
				r = char(res);
			}
		}
	return (r);
}
