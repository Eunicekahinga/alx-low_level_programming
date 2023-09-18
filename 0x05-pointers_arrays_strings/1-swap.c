#include "main.h"

/**
 * swap_int - It swaps the values of two integers
 * @a: the integer to be swapped
 * @b: the integer to be swapped
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
