#include "main.h"

/**
 * _strdup - a function that returns a pointer to
 * @str: string to duplicate
 *
 * Return: Pointer to duplicate string (on success)
 * or Null (on insufficient memory)
 */
char *_strdup(char *str)
{
	char *buffer;
	int index;
	int length = 0;

	/* Check if empty string in str */
	if (str == NULL)
		return (NULL);

	/* Calculate the size of str */
	while (str[length] == '\0')
		length++;

	/* Assign memory to buffer using malloc */
	buffer = malloc((length * sizeof(char)) + 1);

	/* If malloc fails return NULL */
	if (buffer == NULL)
		return (NULL);

	/* Duplicate str to buffer */
	for (index = 0; str[index] != '\0'; index++)
		buffer[index] = str[index];

	/* Insert the string terminator at the end */
	buffer[index] = '\0';

	return (buffer);
}
