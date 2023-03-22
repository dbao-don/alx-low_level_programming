#include "function_pointers.h"
/**
 * print_name - a function that prints a name
 * @name: name to be printed
 * @f: function pointer to be used
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		(*f)(name);
}
