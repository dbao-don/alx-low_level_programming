#include "main.h"
/**
 * _puts_recursion - a function that prints
 * a string followed by a new line.
 * @s: pointer to string to be printed
 * Return: void
 */
void _puts_recursion(char *s)
{
	int i = 0;

	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(s[i]);
	i++;
	_puts_recursion(s + i);
}
