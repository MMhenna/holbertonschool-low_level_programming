#include <stdlib.h>
#include <stdio.h>
/**
 * main - entry point
 * print num
 * Return: success
 */
int main(void)
{
	int c;
	char ch = ',';
	char ch2 = ' ';

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
	if (c < '9')
	{
		putchar(ch2);
		putchar(ch);
	}
	}
	putchar('\n');
	return (0);
}
