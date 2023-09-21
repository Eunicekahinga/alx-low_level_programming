#include "main.h"
#include <stdio.h>

/**
 * string_toupper - changes all lowercase letters
 * to uppercase.
 *
 * Return: Success
 */

char *string_toupper(char *p)
{
	int a = 0;

	while (p[a])
	{
		if (p[a] >= 'a' && p[a] <= 'z')
		{
			p[a] -= 32;
		}
		a++;
	}
	return (p);
}
