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
	int a = 0, i;
	int ascspc = 13;
	char spc[] = {32, '\n', '\t', 44, ';', 46, '?', '!', '"', '(', ')', '{', '}'};

	while (p[a])
	{
		i = 0;

		while (i < ascspc)
		{
			if ((a == 0 || p[a - 1] == spc[i]) && (p[a] >= 'a' && p[a] <= 'z'))
			{
				p[a] -= 32;
			}
			i++;
		}

		a++;
	}

	return (p);
}
