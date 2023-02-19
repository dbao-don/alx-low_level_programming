#include <stdio.h>
/**
 * main - Entry Point
 * Program that prints all
 * possible different combinations
 * of three digits
 * Return: 0
 */
int main(void)
{
	int i = 0;
	int j = 0;
	int k = 0;

	while (i <= 9)
	{
		j = i + 1;

		while (j <= 9)
		{
			k = j + 1;

			while (k <= 9)
			{
				if (k > j && j > i)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(k + '0');
					if (i != 18 || j != 19)
					{
						putchar(',');
						putchar(' ');
					}
				}
				k++;
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
