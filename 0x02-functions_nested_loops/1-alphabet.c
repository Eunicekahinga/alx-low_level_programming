#include <stdio.h>
#include "main.h"
/**
  *main - Entry point of the program
  *print_alphabet - Prints the lowercase alphabet from 'a' to 'z'
  *followed by a new line
  *print_alphabet - Print 'a' - 'z'
  * Return: Always 0.
  */
void print_alphabet(void);

int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet(void)
{
	char alphabets;


	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
	{
		_putchar(alphabets);
	}
	_putchar('\n');

	return (0);

}
