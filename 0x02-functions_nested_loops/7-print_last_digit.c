#include <stdio.h>
#include "main.h"

/**
  * print_last_digit - Prints the last digit of a number
  * @k: The number to be checked
  *
  * Return:  The last value of a digit number
  */
int print_last_digit(int k)
{
	int digit;

	digit = k % 10;

	if (digit < 0)
	{
		digit = digit * -1;
	}

	_putchar(digit + '0');

	return (digit);
}
