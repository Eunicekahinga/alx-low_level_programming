#include "main.h"
#include <stdio.h>

/**
 * rot13 - It encodes a string
 * using rot13
 * @p: the string to be encoded
 * Return: The encoded string
 */

char *rot13(char *p)
{
	int i = 0;

	while (p[i] != '\0')
	{
		while ((p[i] >= 'a' && p[i] <= 'z') || (p[i] >= 'A' && p[i] <= 'Z'))
		{
			if ((p[i] >= 'a' && p[i] <= 'm') || (p[i] >= 'A' && p[i] <= 'M'))
				p[i] += 13;
			else
				p[i] -= 13;
			i++;
		}
		i++;
	}
	return (p);
}
