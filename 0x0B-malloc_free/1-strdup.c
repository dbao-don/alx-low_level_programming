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

	/* Check if empty string in str */
	if (str == NULL)
		return (NULL);

	/* Assign memory to buffer using malloc */
	buffer = malloc(sizeof(char) * sizeof(str));

	/* If malloc fails return NULL */
	if (buffer == NULL)
		return (NULL);

	/* duplicate str to buffer */
	for (index = 0; str[index] != '\0'; index++)
		buffer[index] = str[index];

	return (buffer);
}
