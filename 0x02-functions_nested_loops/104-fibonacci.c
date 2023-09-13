#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers using custom arithmetic
 *
 * Return: No return
 */
int main(void)
{
	int i;
	unsigned long j = 1, k = 2;
	unsigned long carry = 0;

	printf("%lu, %lu", j, k);

	for (i = 2; i < 98; i++)
	{
		unsigned long temp = j + k + carry;

	if (temp >= 10000000000UL)
	{
		carry = temp / 10000000000UL;
		temp %= 10000000000UL;
	}
	else
	{
		carry = 0;
	}

	j = k;
	k = temp;

	printf(", %010lu", k);
	}

	printf("\n");

	return (0);
}
