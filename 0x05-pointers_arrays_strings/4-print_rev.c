#include "main.h"
/**
 * print_rev - a function that prints
 * a string in reverse.
 * @s: string pointer
 * Return: void
 */
void print_rev(char *s)
{
	int a = 0;
	int b;

	while (*(s + a) != '\0')
	{
		a++;
	}
	for (b = a; b >= 0; b--)
		_putchar(*(s + b));
	_putchar('\n');
}
