#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - returns the sum of a and b.
 * @a: first integer
 * @b: second integer
 * Return: Sum of them
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns the difference of a and b.
 * @a: first integer
 * @b: second integer
 * Return: Difference of them
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns the product of a and b.
 * @a: first integer
 * @b: second integer
 * Return: Product of them
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns the result of the division of a by b.
 * @a: first integer
 * @b: second integer
 * Return: Divison of them
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - returns the result of the remainder of a by b.
 * @a: first integer
 * @b: second integer
 * Return: Remainder of them
 */

int op_mod(int a, int b)
{
	return (a % b);
}
