#include <stdio.h>
#include "main.h"
/**
  *main - Entry point of the program
  *
  * Return: Always 0.
  */
int main(void)
{
	char alphabets;

	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
	{
		_putchar(alphabets);
	}
	_putchar('\n');

	return (0);

}
