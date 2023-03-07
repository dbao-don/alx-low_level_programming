#include "main.h"
#include <stdio.h>
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
	int sum_of_diag_1 = 0;
	int sum_of_diag_2 = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		sum_of_diag_1 += *(a + i * size + i);
		sum_of_diag_2 += *(a + (size - i - 1) * size + i);
	}
	printf("%d, %d\n", sum_of_diag_1, sum_of_diag_2);
}
