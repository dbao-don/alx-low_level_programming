#include "main.h"

/**
 * create_array - a function that creates an array of
 * chars, and initializes it with a specific char.
 * @size: size of the memory
 * @c:character to print
 * Return: Pointer to the array or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *buffer;
	unsigned int count;

	/* Check if size is zero */
	if (size == 0)
		return (NULL);

	/* assign buffer size */
	buffer = malloc(size);

	/* Check if malloc failed */
	if (buffer == NULL)
		return (NULL);

	/* Populate the array with char c */
	for (count = 0; count < size; count++)
		buffer[count] = c;

	return (buffer);

}
