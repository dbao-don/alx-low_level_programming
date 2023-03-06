#include "main.h"
/**
 * print_diagsums - a function that prints
 * the sum of the two of the diagonals of a
 * square matrix of integers.
 * @a: side matrix
 * @size: size of the matrix
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, j;

	for (i = 1; i <= 5; i++)
	{
		for (j = 1; j <= i; j++)
		{
			if (j == 3)
			{
				_putchar(j);
				continue;
			}
			_putchar(j);
		}
		_putchar('\n');
	}
	_putchar(i);
}
