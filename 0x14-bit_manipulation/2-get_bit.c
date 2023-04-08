#include "main.h"

/**
 * get_bit - a function that returns the value
 * of a bit at given index.
 * @n: number to iterate
 * @index: zero based index
 *
 * Return: value of bit at index index or -1
 *
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_value;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	bit_value = n >> index;
	return (1 & bit_value);
}
