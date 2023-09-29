#include "main.h"

/**
 * _memcpy - the function copies a memory area
 * @dest: the destination
 * @src: the source
 * @n: the size
 *
 * Return: pointer to the destination always
 *
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
