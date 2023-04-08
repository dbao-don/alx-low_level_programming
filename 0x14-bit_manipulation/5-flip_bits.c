#include "main.h"

/**
 * flip_bits - a function that returns then number of bits you would
 * need to flip to get from one number to another.
 * @n: first number
 * @m: second number
 *
 * Return: number of flip bits required
 *
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int n_or_m = n ^ m;

	while (n_or_m != 0)
	{
		if (n_or_m & 1)
			count++;
		n_or_m = n_or_m >> 1;
	}
	return (count);
}
