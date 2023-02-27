#include "main.h"
#include <stdio.h>
/**
 * print_array - a function that prints
 * n elements of an array of integers
 * @a: pointer to integer array
 * @n: number of elements to print
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	n = 0;
	while (*(a + n) != '\0')
		n++;
	for (i = 0; i < n; i++)
	{
		if (i == n)
		{
			printf("%d", *(a + i));
		}
		else
		{
			printf("%d", *(a + i));
			printf(", ");
		}
	}
	printf("\n");
}
