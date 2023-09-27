#include "main.h"

/**
 * is_prime_recursive - the function checks whether a
 * number is prime or not
 * @n: the number
 * @k: the number used to divide
 * Return: 1 if its a prime number otherwise
 * return 0
 *
 */

int is_prime_recursive(int n, int k)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n == 2)
	{
		return (1);
	}

	if (k == 1)
	{
		return (1);
	}

	if (n % k == 0)
	{
		return (0);
	}

	return (is_prime_recursive(n, k - 1));
}
/**
 * is_prime_number - checks whether number is prime
 * @n: the number
 * Return: 1 if prime 0 if not
 *
 */

int is_prime_number(int n)
{
	return (is_prime_recursive(n, n - 1));
}
