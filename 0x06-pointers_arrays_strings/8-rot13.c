#include "holberton.h"

/**
 *rot13 - convert alpha to another alpha
 *@s: string in parameter
 * Return: success
 **/

char *rot13(char *s)
{
	int i, j;
	char ch[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char c[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; ch[j] != '\0'; j++)
		{
			if (s[i] == ch[j])
			{
				s[i] = c[j];
				break;
			}
		}
	}
	return (s);
}


