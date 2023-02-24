#include "main.h"
/**
 * print_square - a function that
 * prints a square
 * @size: length of one side
 * Return: void
 */
void print_square(int size)
{
	int i = size;
	int j = size;

	while (i <= size && i > 0)
	{
		while (j <= size && j > 0)
		{
			_putchar(35);
			j--;
		}
		_putchar('\n');
		i--;
	}
}
