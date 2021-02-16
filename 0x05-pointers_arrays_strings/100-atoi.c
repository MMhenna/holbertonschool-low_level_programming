#include "holberton.h"
#include <stdio.h>

/**
 *_atoi - convert string to int
 *@s: the string to convert
 * Return: success
 **/

int _atoi(char *s)
{
	int nbr = 0;
	int j = 0, cp = 0, cm = 0;

	while (((s[j] < '0') || (s[j] > '9')) && (s[j] != '\0'))
	{
		if (s[j] == '-')
			cm++;
		if (s[j] == '+')
			cp++;
	j++;
	}

	while (((s[j] >= '0') && (s[j] <= '9')) && (s[j] != '\0'))
	{
		if ((s[j] >= '0') && (s[j] <= '9'))
		{
			nbr = (nbr * 10) + (s[j] - '0');
		}
	j++;
	}

	if (cm > cp)
		return (-nbr);
	else
		return (nbr);
}
