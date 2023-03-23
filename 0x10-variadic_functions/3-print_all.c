#include "variadic_functions.h"
#include <stdio.h>
#include <stddef.h>
int c_arg(va_list arg_psd);
int i_arg(va_list arg_psd);
int f_arg(va_list arg_psd);
int s_arg(va_list arg_psd);
/**
 * print_all - a function that prints all args passed to it
 * @format: type of variable passed
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j;
	char *sep_1 = "", *sep_2 = ", ";
	var select[] = {
		{"c", c_arg},
		{"i", i_arg},
		{"f", f_arg},
		{"s", s_arg},
		{NULL, NULL}
	};

	va_start(args, format);
	while (format != NULL && format[i])
	{
		j = 0;
		while (select[j].f != NULL)
		{
			if (format[i] == *(select[j].c))
			{
				printf("%s", sep_1);
				select[j].f(args);
			}
			j++;
		}
		sep_1 = sep_2;
		i++;
	}
	va_end(args);
	printf("\n");
}
/**
 * c_arg - a function that prints a character
 * @arg_psd: list containing possible characters
 * Return: 0
 */
int c_arg(va_list arg_psd)
{
	printf("%c", va_arg(arg_psd, int));
	return (0);
}
/**
 * i_arg - a function that prints an integer
 * @arg_psd: list containing a possible integer
 * Return: 0
 */
int i_arg(va_list arg_psd)
{
	printf("%d", va_arg(arg_psd, int));
	return (0);
}
/**
 * f_arg - a function that prints a float
 * @arg_psd: list containting a possible float
 * Return: 0
 */
int f_arg(va_list arg_psd)
{
	printf("%f", va_arg(arg_psd, double));
	return (0);
}
/**
 * s_arg - a function that prints a string
 * @arg_psd: list containing possible string
 * Return: 0
 */
int s_arg(va_list arg_psd)
{
	char *s = va_arg(arg_psd, char *);

	if (s == NULL)
		printf("(nil)");
	else
		printf("%s", s);
	return (0);
}
