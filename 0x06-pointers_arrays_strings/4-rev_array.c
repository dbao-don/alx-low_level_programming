#include "main.h"
#include "stdio.h"

/**
 * reverse_array - a function that
 * reverses the content of an
 * array of integers.
 * @a: pointer array
 * @n: elements of array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int k = 0;
	int j[40];

	for (; i < n && n != '\0'; i++)
		j[i] = a[i];
	n--;
	for (; k <= n; k++)
	{
		printf("%d ", j[n]);
		a[i] = j[n];
		n--;
	}
}
