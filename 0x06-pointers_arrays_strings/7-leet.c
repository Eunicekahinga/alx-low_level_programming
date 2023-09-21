#include "main.h"
#include <stdio.h>

/**
 * leet - Encodes strings AEOTL to 1337
 * @p: the string
 *
 * Return: Encoded string
 */

char *leet(char *p)
{
	int a = 0, b = 0, arrs = 5;
	char m[5] = {'A', 'E', 'O', 'T', 'L'};
	char n[5] = {'4', '3', '0', '7', '1'};

	while (p[a])
	{
		b = 0;

		while (b < arrs)
		{
			if (p[a] == m[b] || p[a] - 32 == m[b])
			{
				p[a] = n[b];
			}

			b++;

		}

		a++;

	}

	return (p);
}
