#include <stdlib.h>
#include <stdio.h>
/**
 * main - entry point
 * print combination 3 digit
 * Return: success
 */
int main(void)
{
	int c, i, j;
	int d = '1';
	int n = '2';

	for (c = '0'; c <= '9'; c++)
	{
		for (i = d; i <= '9'; i++)
		{
			for (j = n; j <= '9'; j++)
			{
				putchar(c);
				putchar(i);
				putchar(j);
				if ((c != '7') || (i != '8') || (j != '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		n++;
		}
	d++;
	}
	putchar('\n');
	return (0);
}
