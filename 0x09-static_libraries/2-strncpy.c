#include "main.h"

/**
 * _strncpy - a function
 * that copies a string
 * @dest: pointer to destination
 * @src: pointer to source
 * @n: length to copy
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && *(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	while (i < n)
	{
		*(dest + i) = '\0';
		i++;
	}

	return (dest);
}
