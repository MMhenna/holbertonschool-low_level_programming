#include <stdio.h>

/**
 * main - entry point.
 * calc the sum of multiple 3 and 5 below 1024 and print result
 * Return: Always 0.
 */
int main(void)
{
int i = 3;
int s = 0;
while (i <= 1024)
{
	if ((i % 3 == 0) || (i % 5 == 0))
	{
		s = s + i;
	}
i++;
}

printf("sum of the multiples of 3 and 5 below 1024 : %d\n", s);

return (0);
}

