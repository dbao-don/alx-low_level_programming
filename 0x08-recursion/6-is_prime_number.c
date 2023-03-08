#include "main.h"
int is_prime_minor(int n, int i);
/**
 * is_prime_number - a function that returns 1 if
 * the input is prime and 0 if not.
 * @n: number to check for prime
 * Return: prime or no prime
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime_minor(n, n - 1));
}
/**
 * is_prime_minor - a recursive function that
 * takes two argurnments and check if it is prime.
 * @n: number to be checked
 * @i: factor for checking
 * Return: prime or no pime
 */
int is_prime_minor(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0)
		return (0);
	return (is_prime_minor(n, i - 1));
}
