#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - returns sum of ints
 * @a: first integer
 * @b: second integer
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns subtraction of ints
 * @a: first integer
 * @b: second integer
 * Return: subtraction
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns multiplication of ints
 * @a: first integer
 * @b: second integer
 * Return: int product
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two integers
 * @a: first integer
 * @b: second integer
 * Return: result after division
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - returns division reminder
 * @a: first integer
 * @b: second integer
 * Return: int division reminder(modulus)
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
