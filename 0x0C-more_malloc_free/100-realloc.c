#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - the function reallocates a memory block
 * @ptr: pointer to old memory
 * @old_size: size of the old ptr
 * @new_size: size of the new ptr
 * Return: New size else ptr ele NULL
 *
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int min_size;

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
			return (NULL);
		return (ptr);
	}

	if (new_size == old_size)
		return (ptr);

	min_size = (old_size < new_size) ? old_size : new_size;
	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
		return (NULL);

	memcpy(new_ptr, ptr, min_size);

	free(ptr);
	return (new_ptr);
}
