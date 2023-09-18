#include "main.h"

/**
 * print_rev - prints a given string str
 * in reverse
 * @s: the string to be printed
 * Return: 0(the string in reverse)
 */

void print_rev(char *s)
{
	int l = 0;

	while (s[l] != '\0')
	{
		l++;
	}

	for (l -= 1; l >= 0; l--)
	{
		_putchar(s[l]);
	}

	putchar('\n');
}
