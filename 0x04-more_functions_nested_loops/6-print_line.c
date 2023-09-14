#include "main.h"

/**
 * print_line - Prints a line
 * @n: the number of times _ is printed
 * ends in new line
 * Return: a line
 *
 */
void print_line(int n)
{

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i = 0;

		while (i < n)
		{
			_putchar('_');
			i++;
		}
		_putchar('\n');
	}
}
