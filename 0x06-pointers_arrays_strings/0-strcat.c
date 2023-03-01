#include "main.h"

/**
 * _strcat - a function that
 * concatenates two strings
 * @dest: pointer to be appended
 * @src: pointer to append
 * Return: char
 */

char *_strcat(char *dest, char *src)
{
	char *result = dest;

	while (*dest != '\0')
		dest++;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	return (result);
}
