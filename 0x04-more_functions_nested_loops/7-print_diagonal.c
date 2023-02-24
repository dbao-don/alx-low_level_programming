#include "main.h"
/**
 * print_diagonal - a function that
 * draw as a diagonal line
 * @n: number of times \ prints
 * Return: void
 */
void print_diagonal(int n)
{
	int i;
	for (i = 0; i <= n; i++)
	{
		_putchar(' ');
	}
	_putchar(92);
	_putchar('\n');
}
