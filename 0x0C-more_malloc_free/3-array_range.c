#include "main.h"
#include <stdlib.h>

/**
 * array_range - it creates an array of integers
 * from min to max and ordered
 * @min: the minimum int
 * @max: the maximum int
 * Return: pointer to the new array
 * else NULL
 */

int *array_range(int min, int max)
{
	int *result, i;

	if (min > max)
		return (NULL);

	result = malloc((max - min + 1) * sizeof(int));

	if (result == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
		result[i - min] = i;
	return (result);
}
