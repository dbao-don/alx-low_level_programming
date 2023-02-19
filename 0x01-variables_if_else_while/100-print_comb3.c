#include <stdio.h>
/**
 * main - Entry Point
 * Program that prints all
 * possible different combinations
 * of two digits.
 * Return: 0
 */
int main(void)
{
	int i = 10;

	while (i <= 19)
	{
		int j = 10;

		while (j <= 19)
		{
			if ((j % 10) > (i % 10))
			{
				putchar((i % 10) + '0');
				putchar((j % 10) + '0');
				if (i != 18 || j != 19)
				{
					putchar(',');
					putchar(' ');
				}
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
