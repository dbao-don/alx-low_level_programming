#include "main.h"
#include <stdlib.h>
/**
 * _strdup - a function that returns a pointer to a newly
 * allocated space in memory, which contains a copy of the
 * string given as a parameter.
 * @str: string to return pointer of copy
 * Return: Null or pointer to string duplicate
 */
char *_strdup(char *str)
{
	char *copy = malloc(sizeof(str));
	unsigned long int i;

	if (str == NULL || copy == NULL)
		return (NULL);
	for (i = 0; i < sizeof(str); i++)
		copy[i] = str[i];
	return (copy);
}
