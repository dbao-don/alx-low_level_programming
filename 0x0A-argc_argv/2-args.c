#include <stdio.h>
/**
 * main - a program that prings all
 * all arguments it receives
 * @argc: arguments counter
 * @argv: pointer array to arguments
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
