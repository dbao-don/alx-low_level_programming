#include "main.h"
#include <stdlib.h>
/**
 * set_bit - a function tath sets the value
 * of a bit to 1 at a given index.
 * @n: number to add a bit of 1
 * @index: index to add bit of 1
 *
 * Return: 1 or -1
 *
 */
int set_bit(unsigned long int *n, __attribute__((unused))unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n |= (1UL << index);
	return (1);
}
