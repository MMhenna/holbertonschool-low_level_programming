#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
/**
 * main - entry point
 * print combination 3 digit
 * Return: success
 */
int main(void)
{
	int c, i, j;
	int d = '1';
	int b = '2';

	for (c = '0'; c <= '7'; c++)
	{
		for (i = d; i <= '8'; i++)
		{
			for (j = b; j <= '9'; j++)
			{
				if ((c != i) && (c != j) && (i != j))
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
			}
		b++;
		}
	d++;
	}
	putchar('\n');
	return (0);
}
