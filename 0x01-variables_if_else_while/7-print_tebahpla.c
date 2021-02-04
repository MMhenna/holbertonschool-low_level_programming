
#include <stdlib.h>
#include <stdio.h>
/**
 * main - entry point
 * print alpha reverse
 * Return: success
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
		putchar(c);
	putchar('\n');
	return (0);
}
