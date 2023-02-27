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

	for (b = a; b >= 0 ; b--)
	{
		*(s + a) = *(s + b);
		a--;
	}
}
