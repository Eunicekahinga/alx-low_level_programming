#include "main.h"

/**
 * factorial - it prints factorial of a number
 * @n: the number
 * Return: the factorial,
 * 1 if 0 and -1 if less than 0
 *
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
