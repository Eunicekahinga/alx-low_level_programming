#include <stdio.h>

/**
  * main - Prints number combinations from 00 to 99
  *
  * Return: Always (Success)
  */
int main(void)
{
	int h, i;

	h = i = '0';

	for (h = '0'; h <= '9'; h++)
	{
		for (i = '0'; i <= '9'; i++)
		{
			putchar(h);
			putchar(i);

			if ((h != '9') || (h == '9' && i != '9'))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
