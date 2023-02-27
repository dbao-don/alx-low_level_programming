#include "main.h"
/**
 * rev_string - a function that
 * reverses a string.
 * @s: string pointer
 * Return: void
 */
void rev_string(char *s)
{
	int a = 0;
	int b;

	while (*(s + a) != '\0')
	{
		a++;
	}
	a = a - 1;

	char *c;
	for (b = a; b >= 0 ; b--)
	{
		*(c + a) = *(s + b);
		a--;
	}
	*s = *c;
}
