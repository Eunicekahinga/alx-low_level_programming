#include "main.h"

/**
 * _memset - the function fills memory with
 * a constant byte
 * @s: memory area to be filled
 * @b: the constant byte to be used
 * @n: the bytes to be used
 *
 * Return: pointer to the memory area, s
 *
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
