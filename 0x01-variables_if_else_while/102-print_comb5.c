#include <stdio.h>

/**
  * main - Prints the numbers from 00 to 99
  *
  * Return: Always (Success)
  */
int main(void)
{
	int c, j, i;

	c = j = i = '0';

	for (c = '0'; c <= '9'; c++)
	{
		for (i = '0'; i <= '9'; i++)
		{
			putchar(c);
			putchar(i);
			putchar(' ');

			for (j = '0'; j <= '9'; j++)
			{
				putchar(i);
				putchar(j);

				if ((c != '9') || (c == '9' && i != '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
