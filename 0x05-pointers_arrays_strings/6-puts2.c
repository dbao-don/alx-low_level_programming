#include "main.h"
int _strlen(char *s);
/**
 * puts2 -  a function that prints
 * every other character of a string
 * @str: string pointer
 * Return: void
 */
void puts2(char *str)
{
	int counter = 0;
	int len = _strlen(str);

	while (counter <= len && *(str + counter) != '\0')
	{
		_putchar(*(str + counter));
		counter += 2;
	}
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
