#include "main.h"

/**
 * _puts - prints a string followed by new line
 *@str: the string to be printed
 * Return: voidf
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	putchar('\n');
}
