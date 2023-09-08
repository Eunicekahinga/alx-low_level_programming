#include <stdio.h>

/**
  * main - Printing alphabets in reverse
  *
  * Return: Always (Success)
  */
int main(void)
{
	char e;

	for (e = 'z'; e >= 'a'; e--)
	{
		putchar(e);
	}

	putchar('\n');

	return (0);
}
