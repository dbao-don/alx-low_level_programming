#include "main.h"
#include <stddef.h>
/**
 * _strchr - a funtion that locates
 * a character in a string.
 * @s: pointer to a string.
 * @c: character to locate
 * Return: s or NULL
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (c == '\0')
		return (s);
	return (NULL);
}
