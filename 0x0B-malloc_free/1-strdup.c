#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - a function that returns a pointer to a newly
 * allocated space in memory, which contains a copy of the
 * string given as a parameter.
 * @str: string to return pointer of copy
 * Return: Null or pointer to string duplicate
 */
char *_strdup(char *str)
{
	char *copy;
	unsigned long int i, len;

	len = strlen(str);
	copy = malloc(len + 1);
	if (str == NULL || copy == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		copy[i] = str[i];
	return (copy);
}
