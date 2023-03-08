#include "main.h"
/**
 * is_prime_number - a function that returns 1 if
 * the input is prime and 0 if not.
 * @n: number to check for prime
 * Return: prime or no prime
 */
int is_prime_number(int n)
{
	int i;

	if (n <= 1 )
		return (0);
	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
			return (0);
	}
	return (1);
}
