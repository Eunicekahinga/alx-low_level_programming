#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given
 * @array: the pointer to the arrays
 * @action: the pointer to the functions
 * @size: the array size
 * Return: success
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	long unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
