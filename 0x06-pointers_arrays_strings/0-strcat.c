#include "main.h"

/**
 * _strcat - the function concatenates two strings
 * @dest: the string to be concatenated to
 * @src: the source string to append to dest
 *
 * Return: pointer to resulting string
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, length = 0;

	while (dest[length] != '\0')
	{
		i++;
		length++;
	}

	while (src[i] != '\0')
	{

		i++;
		dest[length + i] = src[i];
	}

	return (dest);
}
