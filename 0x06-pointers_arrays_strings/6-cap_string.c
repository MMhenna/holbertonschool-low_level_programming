#include "holberton.h"

/**
 *cap_string - convert lower case to upper in specific place
 *@s: string in parameter
 * Return: success
 **/

char *cap_string(char *s)
{
	int i = 0;
	char *p = s;

	while (s[i] != '\0')
	{
		if ((s[i] >= 'a') && (s[i] <= 'z'))
		{
			if ((s[i - 1] == ' ') || (s[i - 1] == '	') || (s[i - 1] == '\n'))
				s[i] -= 32;
			if ((s[i - 1] == ',') || (s[i - 1] == ';') || (s[i - 1] == '.'))
				s[i] -= 32;
			if ((s[i - 1] == '!') || (s[i - 1] == '?') || (s[i - 1] == '"'))
				s[i] -= 32;
			if ((s[i - 1] == '(') || (s[i - 1] == ')') || (s[i - 1] == '{') || (s[i - 1] == '}'))
				s[i] -= 32;
		}
	i++;
	}

	return (p);
}
