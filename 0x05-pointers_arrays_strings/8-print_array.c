#include "main.h"

/**
 * print_array - Prints n elements of
 * an array of integers
 * @a: array of integers
 * @n: number of elements
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int m;

	for (m = 0; m < n; m++)
	{
		printf("%d", a[m]);

		if (m != (n - 1))
		{
			printf(", ");
		}
	}

	printf("\n");
}
