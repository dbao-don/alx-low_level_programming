#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that prints the minimum number of coins
 * to make change for an amount of money.
 * @argc: arguments count
 * @argv: pointer arrays to arguments
 * Return: 0 or 1
 */
int main(int argc, char **argv)
{
	int cents, num_quarters, num_dimes, num_nickels;
	int num_twos, num_ones, num_coins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	num_quarters = cents / 25;
	cents %= 25;

	num_dimes = cents / 10;
	cents %= 10;

	num_nickels = cents / 5;
	cents %= 5;

	num_twos = cents / 2;
	cents %= 2;

	num_ones = cents;

	num_coins = num_quarters + num_dimes + num_nickels + num_twos + num_ones;

	printf("%d\n", num_coins);
	return (0);
}
