#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 *print_numbers - print numbers
 *@separator: separator between numbers
 *@n: number of parameter
 *@...: parameters
 *
 * Return: successful.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;

	va_start(ap, n);

	unsigned int i;

	for (i = 1; i <= n; i++)
	{
		if (separator == NULL)
			printf("%d", va_arg(ap, int));
		if (i < n)
			printf("%d %c", va_arg(ap, int), *separator);
		else
			printf("%d", va_arg(ap, int));
	}
	printf("\n");

	va_end(ap);
}
