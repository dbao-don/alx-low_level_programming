#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_numbers - a functions that prints numbers
 * followed by a new line.
 * @n: positive counter for all the numbers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int x;
	unsigned int i;
	va_list args;

	if (n != 0 || separator != NULL)
	{
		va_start(args, n);
		for (i = 0; i < n; i++)
		{
			x = va_arg(args, int);
			printf("%d", x);
			if ( i != n - 1)
				printf("%s", separator);
		}
		va_end(args);
		printf("\n");
	}
}
