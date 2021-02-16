#include "holberton.h"

/**
 *rev_string - reverse the string s
 *@s: the string from parameter
 * Return: success
 **/

void rev_string(char *s)
{
	int i = 0, j;
	char *bp, *ep, ch;

	bp = s;
	ep = s;

	while (s[i] != '\0')
	{
		i++;
	}

	for (j = 0; j < i - 1; j++)
	{
		ep++;
	}

	for (j = 0; j < i / 2; j++)
	{
		ch = *ep;
		*ep = *bp;
		*bp = ch;

		bp++;
		ep--;
	}

}
