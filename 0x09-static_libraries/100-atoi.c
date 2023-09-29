#include "main.h"

/**
 * _atoi - Converts a string to an integer
 * @s: The string to be converted
 *
 * Return: Integer
 *
 */

int _atoi(char *s)
{
	int a = 0;
	unsigned int nv = 0;
	int signp = 1;
	int isint = 0;

	while (s[a])
	{
		if (s[a] == '-')
		{
			signp *= -1;
		}

		while (s[a] >= '0' && s[a] <= '9')
		{
			isint = 1;
			nv = (nv * 10) + (s[a] - '0');
			a++;
		}

		if (isint == 1)
		{
			break;
		}

		a++;
	}

	nv *= signp;
	return (nv);
}
