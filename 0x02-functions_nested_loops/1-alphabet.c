#include <stdio.h>
#include "main.h"
/**
  *print_alphabet - Prints the lowercase alphabet from 'a' to 'z'
  *followed by a newline.
  */
void print_alphabet(void)
{
	char alphabets;


	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)

		_putchar(alphabets);

	_putchar('\n');


}
