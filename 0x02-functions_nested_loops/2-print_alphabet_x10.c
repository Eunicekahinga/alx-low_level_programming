#include <stdio.h>
#include "main.h"

/**
  * print_alphabet_x10 - Prints 'a' - 'z' x10 times
  *
  * Return: void
  */
void print_alphabet_x10(void)
{
	char alphabets;
	int i = 0;

	while (i <= 9)
	{
		for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
		{
			_putchar(alphabets);
		}

		_putchar('\n');

		i++;
	}
}
