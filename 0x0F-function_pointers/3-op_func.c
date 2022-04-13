#include "3-calc.h"
#include <stdlib.h>
/**
 * op_add - add a & b
 * @a: integer
 * @b: integer
 *
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtraction of a & b
 *
 * @a: integer
 * @b: integer
 *
 * Return: subtraction value of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplication of a & b
 * @a: integer
 * @b: integer
 *
 * Return: multiplication result of a & b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - division of a & b
 * @a: integer
 * @b: integer
 *
 * Return: division result of a & b
 */
int op_div(int a, int b)
{
	if (!b)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - modulo of a & b
 * @a: integer
 * @b: integer
 *
 * Return: mod result of a & b
 */
int op_mod(int a, int b)
{
	if (!b)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
