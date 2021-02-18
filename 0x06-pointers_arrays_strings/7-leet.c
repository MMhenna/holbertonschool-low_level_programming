#include "holberton.h"

/**
 *leet - convert some alpha to number
 *@s: string in parameter
 * Return: success
 **/

char *leet(char *s)
{
	int i, j;
	char ch[] = "AaEeOoTtLl", c[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; ch[j] != '\0'; j++)
		{
			if (s[i] == ch[j])
				s[i] = c[j];
		}
	}
	return (s);
}
