#include "main.h"
/**
 * _strstr - a function that
 * locates a substring.
 * @haystack: pointer to locate
 * @needle: what to locate
 * Return: needle or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 1; i <= 5; i++)
	{
		for (j = 1; j <= i; j++)
		{
			if (j == 3)
			{
				_putchar(j);
				continue;
			}
			_putchar(j);
		}
		_putchar('\n');
	}
	return (needle);
}
