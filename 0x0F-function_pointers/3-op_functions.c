#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * op_add - adds 5 functions
 * @a: int a
 * @b: int b
 * Return: result
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtracts
 * @a: int a
 * @b: int b
 * Return: result
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiply
 * @a: int a
 * @b: int b
 * Return: result
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - division
 * @a: int a
 * @b: int b
 * Return: result
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - modulus
 * @a: int a
 * @b: int b
 * Return: result
 */
int op_mod(int a, int b)
{
	return (a % b);
}

