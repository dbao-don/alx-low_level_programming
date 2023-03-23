#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_strings - a functions that prints strings
 * followed by a new line.
 * @separator: separator for numbers
 * @n: positive counter for all the numbers
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *x;
	unsigned int i;
	va_list args;

	if (n != 0)
	{
		va_start(args, n);
		for (i = 0; i < n; i++)
		{
			x = va_arg(args, char *);
			if (x == NULL)
				x = "(nil)";
			printf("%s", x);
			if (i != n - 1 && separator != NULL)
				printf("%s", separator);
		}
		va_end(args);
	}
	printf("\n");
}
