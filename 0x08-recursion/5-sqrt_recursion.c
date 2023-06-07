#include "main.h"
int _sqrt_minor(int n, int i);

/**
 * _sqrt_recursion - a function that returns the
 * natural square root of a number.
 * @n: value to find square root of.
 * Return: square root of n, 1, or -1
 */
int _sqrt_recursion(int n)
{
	int i = 0;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (_sqrt_minor(n, i));
}

/**
 * _sqrt_minor - a function that returns the natural
 * square root of a number.
 * @n: value to find square
 * @i: value of iterations of guesses
 * Return: square root or n or -1
 */
int _sqrt_minor(int n, int i)
{
	if (i * i == n)
		return (i);
	if (n == i / 2)
		return (-1);
	return (_sqrt_minor(n, i + 1));
}
