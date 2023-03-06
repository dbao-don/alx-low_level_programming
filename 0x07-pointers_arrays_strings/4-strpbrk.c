#include "main.h"
/**
 * _strpbrk - a function that searches
 * a string for any of a set of bytes.
 * @s: pointer to locate
 * @accept: bytes to accept
 * Return: s or NULL
 */
char *_strpbrk(char *s, char *accept)
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
	return (s);
}
