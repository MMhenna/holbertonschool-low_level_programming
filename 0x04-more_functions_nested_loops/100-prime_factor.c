#include <stdio.h>

/**
 * main - entry point.
 *
 * Return: success.
 */

int main(void)
{
	int i = 2;
	long int num = 612852475143;

	while (i < num / 2)
	{
		if (num % i == 0)
		{
			num = num / i;
			i = 2;
		}
	i++;
	}
	printf("%li\n", num);
return (0);
}
