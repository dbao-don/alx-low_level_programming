#include "variadic_functions.h"
/**
 * sum_them_all - a functions that returns the
 * sum of all its parameters.
 * @n: positive counter for all the numbers
 * Return: sum of all the parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0, x;
	unsigned int i;
	va_list args;

	if (n == 0)
		return (0);
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		x = va_arg(args, int);
		sum += x;
	}
	va_end(args);

	return (sum);
}
