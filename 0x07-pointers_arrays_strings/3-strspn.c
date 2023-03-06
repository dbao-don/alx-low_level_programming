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
