#include "holberton.h"

/**
 *string_toupper - convert lower case to upper
 *@s: string in parameter
 * Return: success
 **/

char *string_toupper(char *s)
{
	char *p = s;

	while (*p != '\0')
	{
		if ((*p >= 97) && (*p <= 122))
			*p -= 32;
		p++;
	}

	return (s);
}
