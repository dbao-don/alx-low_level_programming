#ifndef VARIADIC_FUNC_H
#define VARIADIC_FUNC_H
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);

#endif