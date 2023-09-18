#include "main.h"

/**
 * puts2 - prints every other character followed
 * by new line
 * @str: the variable to be printed
 *
 * Return: void
 */

void puts2(char *str)
{
	int k = 0;

	while (str[k] != '\0')
	{
		_putchar(str[k]);
		k += 2;
	}

	_putchar('\n');
}
