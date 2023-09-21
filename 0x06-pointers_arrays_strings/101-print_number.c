#include "main.h"
#include <stdio.h>

/**
 *print_number - prints an integer
 * @n: the integer
 *
 * Return: void
 */

void print_number(int n)
{
	unsigned int a;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	a = n;

	if ((a / 10) > 0)
	{
		print_number(a / 10);
	}
	_putchar('0' + (a % 10));
}
