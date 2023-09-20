#include "main.h"
#include <stdio.h>

/**
 * reverse_array - it reverses the contents of
 * an array a
 * @a: the array
 * @n: the array size
 * Return: the reversed array
 */

void reverse_array(int *a, int n)

{
	int *b, i, j, temp;

	b = a;

	for (i = 1; i < n; i++)
	{
		b++;
	}

	for (j = 0; j < i / 2; j++)
	{
		temp = a[j];
		a[j] = *b;
		*b = temp;
		b--;
	}
}
