#include "main.h"

/**
 * is_prime_number - the function checks whether a
 * number is prime or not
 * @n: the number
 * Return: 1 if its a prime number otherwise
 * return 0
 *
 */

int is_prime_number(int n)
{
	int k;

	if (n <= 1)
	{
		return (0);
	}
	if (n == 2)
	{
		return (1);
	}

	if (n % 2 == 0)
	{
		return (0);
	}

	for (k = 3; k * k <= n; k += 2)
	{
		if (n % k == 0)
		{
			return (0);
		}
	}

	return (1);
}
