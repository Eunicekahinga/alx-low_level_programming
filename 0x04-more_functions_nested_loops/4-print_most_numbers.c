#include "main.h"

/**
 * print_most_numbers - print numbers 0-9
 * exclude 2 and 4
 *@i: The character to be printed
 * Return: 0
 *
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i == 2 || i == 4)
		{
			continue;
		}
		else
		{
			_putchar(i + '0');
		}
	}
	_putchar('\n');
}
