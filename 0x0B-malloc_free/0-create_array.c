#include "main.h"
#include <stdlib.h>

/**
 * Create_array - a function to create an array
 * of chars
 * @size: the size of the array created
 * @c the char initialized
 * Return: pointer to the array, else NULL on
 * failure
 *
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int j = 0;

	ptr = malloc(size * sizeof(char));

	if (ptr == NULL)
		return (NULL);


	for (j = 0; j < size; j++)
	{
		ptr[j] = c;
	}
	return (ptr);
}
