#include "holberton.h"

/**
 *print_last_digit - give the last digit of a number
 *@n: the number in parameter
 * Return: last digit of n
 */

int print_last_digit(int n)
{
int i;
i = n % 10;
if (i < 0)
{
i = i * -1;
}
_putchar(i + '0');
return (i);
}

