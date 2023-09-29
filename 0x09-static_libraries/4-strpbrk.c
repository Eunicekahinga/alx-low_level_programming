#include "main.h"

/**
 * _strpbrk - searches a string for any
 * occurence of a set of bytes
 * @s: the string
 * @accept: the set of byte
 *
 * Return: Pointer to the byte in s matching
 * one of the bytes in accept
 * or NULL if not found
 *
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		char *b = accept;

		while (*b)
		{
			if (*s == *b)
				return (s);
			b++;
		}
		s++;
	}
	return (NULL);
}
