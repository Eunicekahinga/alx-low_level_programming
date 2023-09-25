#include "main.h"

/**
 * _strspn - the function gets the length of
 * a prefix substring
 * @s: the string
 * @accept: the bytes to search for
 *
 * Return: Bytes present in initial segment of
 * s of bytes from accept
 *
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int k = 0;

	while (*s)
	{
		int found = 0;
		char *a = accept;

		while (*a)
		{
			if (*s == *a)
			{
				found = 1;
				break;
			}
			a++;
		}

		if (!found)
		{
			break;
		}

		k++;
		s++;
	}

	return (k);
}
