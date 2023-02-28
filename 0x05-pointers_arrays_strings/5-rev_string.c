#include "main.h"
/**
 * _strlen - a function that returns
 * the length of a string.
 * @s: value of string pointer
 * Return: integer
 */
int _strlen(char *s);
/**
 * rev_string - a function that
 * reverses a string.
 * @s: string pointer
 * Return: void
 */
void rev_string(char *s)
{
	int a = _strlen(s);
	char *start = s;
	char *end = s + a - 1;

	while (start < end)
	{
		char temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
}
int _strlen(char *s)
{
	int a = 0;

	while (*(s + a) != '\0')
		a++;
	return (a);
}
