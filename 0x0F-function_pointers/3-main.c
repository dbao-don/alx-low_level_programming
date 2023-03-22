#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - a function that prints the value of to inputs
 * @argc: counter for command-line arguments
 * @argv: number of command-line arguments passed
 * Return: 0
 */
int main(int argc, char **argv)
{
	int a, b, (*opr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	opr = get_op_func(argv[2]);

	if ( opr == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*argv[2] == '%' || *argv[2] == '/') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", opr(a, b));

	return (0);
}
