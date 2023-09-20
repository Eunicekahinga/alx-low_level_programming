#include "main.h"

/**
 * _strncat - the function concatenates two strings
 * @dest: the string to be concatenated to
 * @src: the source string to append to dest
 * @n: the number of characters to be appended
 *
 * Return: pointer to resulting string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, length = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		length++;
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		if (i < n)
		{
			dest[length + i] = src[i];
		}
	}
	dest[length + i] = '\0';
	return (dest);
}
