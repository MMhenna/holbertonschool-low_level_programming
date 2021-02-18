#include "holberton.h"

/**
 *cap_string - convert lower case to upper in specific place
 *@s: string in parameter
 * Return: success
 **/

char *cap_string(char *s)
{
	int i, k = 0;
	char *p = s;

	while (*p != '\0')
	{
		if ((k != 0) && (s[i] >= 'a') && (s[i] <= 'z'))
		{
			s[i] += 32;
			k = 0;
		}
		if ((s[i] == ' ') || (s[i] == '	') || (s[i] == '\n'))
			k++;
		if ((s[i] == ',') || (s[i] == ';') || (s[i] == '.'))
			k++;
		if ((s[i] == '!') || (s[i] == '?') || (s[i] == '"'))
			k++;
		if ((s[i] == '(') || (s[i] == ')') || (s[i] == '{') || (s[i] == '}'))
			k++;
	}

	return (p);
}
