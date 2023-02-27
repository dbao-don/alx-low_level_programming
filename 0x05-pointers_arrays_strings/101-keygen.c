#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - a program that generates
 * random valid passwords for
 * the program 101-crackme
 * Return: 0
 */
int main(void)
{
	int i;
	char c;

	srand(time(NULL));
	while (i <= 2645)
	{
		c = rand() % 128;
		i += c;
		putchar(c);
	}
	putchar(2772 - i);
	return (0);
}
