#ifndef VARIADIC_FUNC_H
#define VARIADIC_FUNC_H
#include <stdarg.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
/**
 * struct var - struct to choose variabe type
 * @c: variable type placeholder
 * @f: function for variable type
 */
typedef struct var
{
	char *c;
	int (*f)(va_list arg_psd);
} var;
#endif
