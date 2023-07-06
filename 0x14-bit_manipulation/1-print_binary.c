#include "main.h"

/**
 * print_binary - a function that prints the
 * binary representation of a number.
 * @n: number to be converted to binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int i = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int j = 0;

	while (i > 0)
	{
		if (n & i)
		{
			putchar('1');
			j = 1;
		}
		else if (j == 1)
			putchar('0');
		i = i >> 1;
	}
	if (j == 0)
		putchar('0');
}
