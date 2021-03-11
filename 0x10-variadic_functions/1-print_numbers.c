#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 *print_numbers - print numbers
 *@separator: separator between numbers
 *@n: number of parameter
 *
 * Return: successful.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list ap;

	va_start(ap, n);

	for (i = 1; i <= n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (separator && i < n)
			printf("%s", separator);
	}
	printf("\n");

	va_end(ap);
}
