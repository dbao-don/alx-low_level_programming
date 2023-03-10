#include "main.h"
/**
 * _strspn - a function that gets the
 * length of a prefix substring.
 * @s: intial segment
 * @accept: bytes to be accepted
 * Return: s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	char *p;

	while (*s)
	{
		p = accept;
		while (*p && *p != *s)
			p++;
		if (!*p)
			break;
		i++;
		s++;
	}
	return (i);
}
