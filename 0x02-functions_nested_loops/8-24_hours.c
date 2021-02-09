#include "holberton.h"

/**
 * jack_bauer - prints every minute of the day
 */

void jack_bauer(void)
{
int a, b, c, d, i;
for (a = '0'; a <= '2'; a++)
{
	if (a != '2')
		i = '9';
	else
		i = '4';
	for (b = '0'; b <= i; b++)
	{
		for (c = '0'; c <= '5'; c++)
		{
			for (d = '0'; d <= '9'; d++)
			{
				_putchar(a);
				_putchar(b);
				_putchar(':');
				_putchar(c);
				_putchar(d);
				_putchar('\n');
			}
		}
	}
}
}

