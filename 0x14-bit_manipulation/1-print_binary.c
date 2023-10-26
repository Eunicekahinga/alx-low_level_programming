#include "main.h"

/**
 * print_binary -function prints binary
 * representation of a number
 * @n: the number to print in binary
 */
void print_binary(unsigned long int n)
{
	int move, bit;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	for (bit = 0, move = sizeof(n) * 8 - 1; move >= 0; move--)
	{
		if ((n >> move) & 1)
		{
			bit = 1;
		}
		if (bit == 1)
			((n >> move) & 1) ? _putchar('1') : _putchar('0');
	}
}
