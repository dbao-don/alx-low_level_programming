#include "main.h"
/**
 * times_table - prints
 * 9 times table.
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			int k = i * j;

			if (k > 0 && k <= 9)
			{
				_putchar(' ');
				_putchar(' ');
			}
			else
			{
				_putchar(' ');
			}
			_putchar(k + '0');
		}
		_putchar('\n');
	}
}
