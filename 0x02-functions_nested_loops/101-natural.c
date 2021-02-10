#include <stdio.h>

/**
 * main - entry point.
 * calc the sum of multiple 3 and 5 below 1024 and print result
 * Return: Always 0.
 */
int main(void)
{
int t = 0;
int f = 0;
int i = 3;
int j = 5;

while (i <= 1024)
{
	t = t + i;
	i = i + 3;
}
while (j <= 1024)
{
	f = f + j;
	j = j + 5;
}

printf("sum of the multiples of 3 below 1024 : %d\n", t);
printf("sum of the multiples of 5 below 1024 : %d\n", f);

return (0);
}

