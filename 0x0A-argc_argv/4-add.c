#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - a program that adds positve numbers
 * @argc: arguments counter
 * @argv: pointer arrays to arguments
 * Return: 0 or 1
 */
int main(int argc, char **argv)
{
	int i, j = 0;

	if (argc == 1 && argv != NULL)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
		if (!isdigit(*(argv[i])))
		{
			printf("Error\n");
			return (1);
		}
	for (i = 1; i < argc; i++)
		j = j + atoi(argv[i]);
	printf("%d\n", j);
	return (0);
}
