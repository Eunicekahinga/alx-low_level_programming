#include <stdio.h>

/**
  * main - Prints the single digits between 0 and 10
  *
  * Return: Always (Success)
  */
int main(void)
{
	int y;

	for (y = '0'; y	<= '9'; y++)
	{
		putchar(y);
	}

	putchar('\n');

	return (0);
}
