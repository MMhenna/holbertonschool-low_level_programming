#include "holberton.h"
#include <stdio.h>

/**
 *_strcpy - copy first string in second
 *@dest: to copy in
 *@src: the string to copy
 * Return: success
 **/

char *_strcpy(char *dest, char *src)
{
	char *p = dest;

	while (*src != '\0')
	{
		*p = *src;
		p++;
		src++;
	}
	*p = '\0';
	return (p);
}
