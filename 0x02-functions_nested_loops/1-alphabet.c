#include "main.h"
/**
 * print_alphabet - A function that prints
 * the alphabet, in lowercase.
 */
void print_alphabet(void)
{
	int i = 97;

	while (i <= 122)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
