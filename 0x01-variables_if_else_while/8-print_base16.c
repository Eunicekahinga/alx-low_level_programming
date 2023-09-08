#include <stdio.h>

/**
  * main - Printing hexadecimal numbers
  *
  * Return: Always (Success)
  */
int main(void)
{
	char e;

	for (e = '0'; e <= '9'; e++)
	{
		putchar(e);
	}

	for (e = 'a'; e <= 'f'; e++)
	{
		putchar(e);
	}

	putchar('\n');

	return (0);
}
