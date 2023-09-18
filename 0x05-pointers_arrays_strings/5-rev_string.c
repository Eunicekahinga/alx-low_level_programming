#include "main.h"

/**
 * rev_string - it reverses a string
 * @s: the string to be reversed
 *
 * Return: void
 */

void rev_string(char *s)
{
	int j, k = 0, l;
	char *b, temp;

	b = s;

	while (s[k] != '\0')
	{
		k++;
	}

	for (l = 1; l < k; l++)
	{
		b++;
	}

	for (j = 0; j < (k / 2); j++)
	{
		temp = s[j];
		s[j] = *b;
		*b = temp;
		b--;
	}
}
