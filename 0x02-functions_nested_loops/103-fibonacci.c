#include <stdio.h>

/**
 * main - entry point.
 * prints the sum of the even-valued terms.
 * Return: Always 0.
 */

int main(void)
{
	int prev1 = 1, prev2 = 2, sum = 0, s = 0;

	while (s < 4000000)
	{
		s = prev1 + prev2;

		if (s % 2 == 0)
			sum += s;

		prev1 = prev2;
		prev2 = s;
	}
	printf("%d\n", sum);
return (0);
}

