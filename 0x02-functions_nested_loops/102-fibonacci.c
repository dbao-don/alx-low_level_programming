#include "main.h"
/**
 * main - prints the first
 * 50 Fibonacci numbers
 * Return:0
 */
int main(void)
{
	int i = 1, j = 1, k = 2, l;

	printf("%d, %d, ", j, k);

	while (i <= 48)
	{
		l = j + k;
		printf("%d, ", l);
		j = k;
		k = l;
		i++;
	}
	l = j + k;
	printf("%d\n", l);
	return (0);
}

