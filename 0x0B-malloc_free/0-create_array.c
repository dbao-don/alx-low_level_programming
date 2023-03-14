#include "main.h"
#include <stdlib.h>
/**
 * create_array - a function that creates an array
 * of chars, and init it with a specific char.
 * @size: non-negative size of array
 * @c: character to be init
 * Return: NULL or Pointer to array.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *temp;

	temp = malloc(sizeof(char) * size);
	if (size == 0 || temp == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		temp[i] = c;
	return (temp);
}
