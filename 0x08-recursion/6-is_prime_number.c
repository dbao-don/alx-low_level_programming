#include "main.h"
int is_prime_minor(int n, int i);

/**
 * is_prime_number - a function that returns 1
 * if the input is prime and 0 if it isn't.
 * @n: the number to check prime
 * Return: 0 on prime or 1 on no prime
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime_minor(n, n - 1));
}

/**
 * is_prime_minor - a recursive function that
 * takes 2 arguments and checks for prime.
 * @n: number to check
 * @i: factor for the check
 * Return: 0 on prime or 1 on no prime
 */
int is_prime_minor(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0)
		return (0);
	return (is_prime_minor(n, i - 1));
}
