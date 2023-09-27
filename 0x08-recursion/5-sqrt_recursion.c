#include "main.h"

/**
 * _sqrt_recursive - Returns the squareroot of a number
 * @n: the number
 * @i: the square root
 * Return: Square root or -1 if no squareroot
 *
 */
int _sqrt_recursive(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}

	else if (i * i > n)
	{
		return (-1);
	}


	else
	{
		return (_sqrt_recursive(n, i + 1));
	}
}
/**
 * _sqrt_recursion - Returns the square
 * root of a number
 * @n: the number
 * Return: the square root.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt_recursive(n, 0));
}
