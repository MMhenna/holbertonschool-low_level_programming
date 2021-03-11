#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 *print_strings - print string
 *@separator: separator between numbers
 *@n: number of parameter
 *@...: parameters
 *
 * Return: successful.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;

	va_start(ap, n);

	unsigned int i;
	char *ch;

	for (i = 1; i <= n; i++)
	{
		ch = va_arg(ap, char *);

		if (ch == NULL)
			printf("(nil)");
		else
			printf("%s", ch);

		if (separator && i < n)
			printf("%s", separator);
	}
	printf("\n");

	va_end(ap);
}
