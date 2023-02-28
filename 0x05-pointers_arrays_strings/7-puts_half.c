#include "main.h"
int _strlen(char *s);
/**
 * puts_half - a funtion that prints
 * half of a string
 * @str: pointer of a string
 * Return: void
 */
void puts_half(char *str)
{
	int len = _strlen(str);
	int counter = len;

	if (len % 2 != 0)
	{
		len++;
	}
	counter = len / 2;
	for (; counter < len; counter++)
		_putchar(*(str + counter));
	_putchar('\n');
}
/**
 * _strlen - a function that returns
 * the length of a string.
 * @s: value of string pointer
 * Return: integer
 */
int _strlen(char *s)
{
	int a = 0;

	while (*(s + a) != '\0')
		a++;
	return (a);
}
