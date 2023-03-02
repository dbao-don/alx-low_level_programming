#include "main.h"

/**
 * _strcmp - a function that
 * compares two strings.
 * @s1: pointer to first string
 * @s2: pointer to second string
 * Return: length of longer string
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	do {
		if (*(s1 + i) != '\0')
			return (*(s1 + i) - *(s2 + i));
	} while (*(s1 + i) == *(s2 + i));

	return (*(s1 + i) - *(s2 + i));
}
