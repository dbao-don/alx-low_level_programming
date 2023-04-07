#include "main.h"
unsigned int power(unsigned int base, unsigned int exp);
/**
 * binary_to_uint - a function that converts a
 * binary number to an unsigned int.
 * @b: pointer to binary digit to convert
 *
 * Return: Converted number or 0
 *
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0, exp = 0;
	unsigned int value, pow_value;
	int i = 0;

	if (b == NULL)
		return (0);
	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		i++;
	}
	i = i - 1;
	for (; i >= 0; i--)
	{
		value = (b[i] == '0') ? 0 : 1;
		pow_value = power(2, exp);
		sum += value * pow_value;
		exp++;
	}
	return (sum);
}
/**
 * power - a function that return the value
 * of a value raised to another
 * @base: initial value
 * @exp: value to be raised by
 *
 * Return: value of the operation
 *
 */
unsigned int power(unsigned int base, unsigned int exp)
{
	unsigned int result = 1;
	while (exp > 0)
	{
		result *= base;
		exp--;
	}
	return result;
}
