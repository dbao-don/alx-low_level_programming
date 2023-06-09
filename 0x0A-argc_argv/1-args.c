#include <stdio.h>
/**
 * main - a program that prints the number
 * of arguments passed into it.
 * @argc: arguments counter
 * @argv: pointer array to arguments
 * Return: 0
 */
int main(int argc, char **argv)
{
	if (!**argv)
		return (-1);
	printf("%d\n", argc - 1);
	return (0);
}
