#include "function_pointers.h"
/**
 * int_index - a function that searches for an integer
 * @array: array to search
 * @size: size of array
 * @cmp: function to compare the value
 * Return: match or no match int value
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, j;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		j = (*cmp)(array[i]);
		if (j != 0)
			break;
	}
	if (j == 0)
		return (-1);
	return (i);
}
