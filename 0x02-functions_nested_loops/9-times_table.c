#include "main.h"
/**
 * times_table - prints
 * 9 times table.
 */
void times_table(void)
{
	int i = 0;

	while (i <= 9)
	{
		int j = 0;

		while (j <= 9)
		{
			int k = i * j;

			if ((k / 10) == 0)
			{
				if (j != 0)
					_putchar(' ');
				_putchar(k + '0');

				if (j == 9)
					continue;
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
				if (j == 9)
					continue;
				_putchar(',');
				_putchar(' ');
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
