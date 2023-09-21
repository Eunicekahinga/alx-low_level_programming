#include "main.h"
#include <stdio.h>

/**
 * cap_string - changes all uppercase letters
 * to lowercase.
 * @p: the string to be converted
 *
 * Return: Success
 */

char *cap_string(char *p)
{
	int a = 0;

	while (p[a])
	{
		if (p[a] >= 'A' && p[a] <= 'Z')
		{
			p[a] += 32;
		}
		a++;
	}
	return (p);
}
