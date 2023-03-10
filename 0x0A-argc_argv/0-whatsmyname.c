#include <stdio.h>
/**
 * main - a program that prints its
 * name followed by a new line.
 * @argc: arguments counter
 * @argv: pointer array of argurments
 * Return: 0
 */
int main(int argc, char **argv)
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
