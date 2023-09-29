#include "main.h"

/**
 * _strlen - It returns the length of a string
 * @s: the string to be checked
 *
 * Return: 0(success)
 */

int _strlen(char *s)
{
	int strlength = 0;

	while (*s != '\0')
	{
		strlength++;
		s++;
	}

	return (strlength);
}
