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
	int j;
	int k = 0;

	while (str[k] != '\0')
	{
		k++;
	}
	for (j = 0; j < k; j += 2)
	{
		_putchar(str[j]);
	}

	_putchar('\n');
}

