#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - a function that searches
 * a string for any of a set of bytes.
 * @s: pointer to locate
 * @accept: bytes to accept
 * Return: s or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	char *a;

	for (; *s != '\0'; s++)
		for (a = accept; *a != '\0'; a++)
		{
			if (*s == *a)
				return (s);
		}
	return (NULL);
}
