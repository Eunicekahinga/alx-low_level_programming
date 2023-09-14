#include "main.h"

/**
 * more_numbers - Prints number 0 - 14
 * print it 10 times
 *
 * Return: Return numbers
 */

void more_numbers(void)
{
	int i = 0, j;

	while (i < 10)
	{
		j = 0;

		while (j <= 14)
		{
			if (j > 9)
			{
				_putchar ('0' + (j / 10));
			}
			_putchar ('0' + (j % 10));
			j++;
		}
		_putchar ('\n');
		i++;
	}
}
