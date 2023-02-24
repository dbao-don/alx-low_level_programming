#include "main.h"
/**
 * print_number - a funtion that
 * prints an integer.
 * @n: number to print
 * Return: void
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10)
	{
		print_number(n / 10);
	}
	_putchar((unsigned int) n % 10 + '0');
}