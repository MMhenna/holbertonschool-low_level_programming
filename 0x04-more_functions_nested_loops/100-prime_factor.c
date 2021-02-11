#include <stdio.h>

/**
 * main - entry point.
 *
 * Return: success.
 */

int main(void)
{
	int i = 2;
	int l;
	long num = 612852475143;

	while (i < num)
	{
		if (num % i == 0)
		{
			l = i;
			num = num / i;
			i = 2;
		}
	i++;
	}
	printf(" the largest prime factor is : %d\n", l);
return (0);
}
