#include <stdio.h>
/**
 * main - Entry Point
 * program that prints
 * all possible combinations
 * of two two-digit numbers
 * Return: 0
 */
#include <stdio.h>
int main(void)
{
	int i = 0;
	int j = i + 1;

	while (i <= 99)
	{
		while (j <= 99)
		{
			putchar(i / 10 + '0');
			putchar(i % 10 + '0');
			putchar(' ');
			putchar(j / 10 + '0');
			putchar(j % 10 + '0');
			if (i != 98 || j != 99)
			{
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		i++;
		j = i + 1;
	}
	putchar('\n');
	return (0);
}
