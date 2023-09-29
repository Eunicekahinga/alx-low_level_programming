#include "main.h"
#include <stdio.h>

/**
 * _strncpy - the function copies a string
 * @dest: the destination of the copied string
 * @src: the string to be copied
 * @n: the bytes available in src
 * Return: Success (dest)
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
