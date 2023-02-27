#include "main.h"
/**
 * swap_int - a function that swaps
 * the values of two integers.
 * @a: value 1 to swap
 * @b: value 2 to swap
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
