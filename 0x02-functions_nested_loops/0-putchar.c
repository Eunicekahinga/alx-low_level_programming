#include "main.h"
#include <stdio.h>

/**
  *main - Entry point of the program
  *
  *The function prints _putchar
  *its followed by a new line
  *
  *Return: 0
  */
int main(void)
{
	char light[8] = "_putchar";
	int j;

	for (j = 0; j < 8; j++)
		_putchar(light[j]);
	_putchar('\n');

	return (0);

}
