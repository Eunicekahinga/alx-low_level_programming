#include "main.h"

/**
 * _puts_recursion - the funtion prints a string
 * followed by a new line
 * @s: the string to be printed
 * Return: the string characters
 *
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}

	putchar(*s);
	_puts_recursion(s + 1);
}
