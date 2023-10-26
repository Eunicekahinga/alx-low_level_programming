#include "main.h"

/**
 * flip_bits - Counts the number of bits to flip
 * from one number to another.
 * @n: The first unsigned long int number.
 * @m: The second unsigned long int number.
 *
 * Return: The number of bits that need to be flipped.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int differ, numCount = 0;

	differ = n ^ m;

	while (differ > 0)
	{
		numCount += differ & 1;
		differ >>= 1;
	}

	return (numCount);
}
