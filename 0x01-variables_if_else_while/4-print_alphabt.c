#include <stdlib.h>
#include <stdio.h>
/**
 * main - entry point
 * print alpha without e and q
 * Return: success
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
	if ((c != 'e') && (c != 'q'))
		putchar(c);
	}
	putchar('\n');
	return (0);
}
