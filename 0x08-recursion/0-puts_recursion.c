#include "main.h"

/**
 * _puts_recursion - a function that prints
 * a string followed by a new line.
 * @s: pointer to string
 */
void _puts_recursion(char *s)
{
	int count = 0;

	if (*s == '\0')
	{
		_putchar('\n');
		exit(1);
	}
	_putchar(s[count]);
	count++;
	_puts_recursion(s + count);
}
