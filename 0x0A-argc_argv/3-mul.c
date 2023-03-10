#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that multiples two numbers
 * @argc: arguments counters
 * @argv: pointer array
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i = 0, mul = 1;

	if (i == argc - 1)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc && argv[i] != NULL; i++)
		mul *= atoi(argv[i]);
	printf("%d\n", mul);
	return (0);
}
