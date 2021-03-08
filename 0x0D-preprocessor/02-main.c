
#include <stdio.h>

/**
 * main -  prints the name of the file.
 *
 * Return: Always 0.
 */
int main(void)
{
	#define NAME __BASE_FILE__
	printf("%s\n", NAME);
	return (0);
}

