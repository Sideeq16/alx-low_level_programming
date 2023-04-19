#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - sum number a and b
 * @a: number a
 * @b: number b
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}


/**
 * op_sub - sum number a and b
 * @a: number a
 * @b: number b
 * Return: subtract b from a
 */
int op_sub(int a, int b)
{
	return (a - b);
}


/**
 * op_mul - multiply number a and b
 * @a: number a
 * @b: number b
 * Return: multiply a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}


/**
 * op_div - div number a and b
 * @a: number a
 * @b: number b
 * Return: divide a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}


/**
 * op_add - mod number a and b
 * @a: number a
 * @b: number b
 * Return: mod of a and b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
