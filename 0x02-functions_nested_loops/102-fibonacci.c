#include <stdio.h>

/**
 * main - entry point.
 * print the first 50 Fibonacci numbers.
 * Return: Always 0.
 */

int main(void)
{
	int i;
	long int  prev1 = 1, prev2 = 2, s = 0;

	printf("%li, %li, ", prev1, prev2);
	for (i = 3; i <= 50; i++)
	{
		s = prev1 + prev2;
		prev1 = prev2;
		prev2 = s;
		printf("%li, ", s);
	}
	printf("\n");
return (0);
}

