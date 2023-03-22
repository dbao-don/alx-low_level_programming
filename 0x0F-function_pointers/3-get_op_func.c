#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * get_op_func - a funtion that selects the correct
 * function to perform the operation
 * @s: type of operator
 * Return: pointer to correct function
 */
int (*get_op_func(char *s))(int, int)
{
	opt_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].f != NULL)
	{
		if (*s == *(ops[i].op) && s[1] == '\0')
			return (ops[i].f);
		i++;
	}
	printf("Error\n");
	exit(99);
}
