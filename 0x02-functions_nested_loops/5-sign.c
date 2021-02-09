#include "holberton.h"

/**
 *print_sign - check status of the number n
 *@n: the number to check his status
 * Return: positive 1.
 * negative, -1 is returned.
 * null, 0 is returned.
 */

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
else
{
_putchar('0');
return (0);
}
}

