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

	for (c = '0'; c <= '7'; c++)
	{
		for (i = '1'; i <= '8'; i++)
		{
			for (j = '1'; j <= '9'; j++)
			{
				if ((c != i) && (i != j) && (c != j))
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
		}
	}
	putchar('\n');
	return (0);
}
