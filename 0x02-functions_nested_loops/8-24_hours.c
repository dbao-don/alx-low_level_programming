#include "main.h"
/**
 * jack_bauer - a function that
 * prints every mind of the day.
 * Return: void
 */
void jack_bauer(void)
{
	int i;

	while (i < 24)
	{
		int j;

		while (j < 60)
		{
			if (i < 10 && j < 10)
			{
				_putchar(48);
				_putchar('0' + i);
				_putchar(':');
				_putchar(48);
				_putchar('0' + j);
			}
			else if (i < 10 && j >= 10)
			{
				_putchar(48);
				_putchar('0' + i);
				_putchar(':');
				_putchar('0' + j);
			}
			else if (i >= 10 && j < 10)
			{
				_putchar('0' + i);
				_putchar(':');
				_putchar(48);
				_putchar('0' + j);
			}
			else
			{
				_putchar('0' + i);
				_putchar(':');
				_putchar('0' + j);
			}
			j++;
		}
		i++;
	}
}
