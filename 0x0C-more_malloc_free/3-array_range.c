#include "main.h"

/**
 * array_range - a function that creates
 * an array of integers.
 * @min: minimum accepted value
 * @max: maximum accepted value
 * Return: pointer to int array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i = 0, j, k = min;

	if (min > max)
		return (NULL);
	ptr = malloc((max - min + 1) * sizeof(int));
	if (ptr == NULL)
		return (NULL);

	while (k <= max)
	{
		k += 1;
		i++;
	}
	for (j = 0; j <= i - 1; j++)
	{
		if (j == 0)
			ptr[j] = min;
		else
			ptr[j] = min + j;
	}
	return (ptr);
}
