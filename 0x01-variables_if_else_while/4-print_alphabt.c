#include <stdio.h>
/**
 * main - Entry Point
 * Programs that prints the
 * alphabet in lowercase
 * Return: 0
 */
int main(void)
{
	int i = 97;

	while (i <= 122)
	{
		if (i == 101 || i == 113)
		{
			i++;
			continue;
		}
		else
		{
			putchar(i);
			i++;
		}
	}
	putchar('\n');
	return (0);
}
