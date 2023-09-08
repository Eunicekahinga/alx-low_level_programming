#include <stdio.h>

/**
  * main - Prints the numbers since 0 to 9
  *
  * Return: Always (Success)
  */
int main(void)
{
	char y;

	for (y = '0'; y <= '9'; y++)
	{
		putchar(y);
	}

	putchar('\n');

	return (0);
}
