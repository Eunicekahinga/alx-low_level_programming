#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - it searches for integers
 * @array: the array to be searched
 * @size: number of elements
 * @cmp: the pointer to the function
 * Return: index to first element else -1
 *
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
