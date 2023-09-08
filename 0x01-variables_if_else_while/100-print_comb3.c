#include <stdio.h>

/**
  * main - Prints two numbers starting with the smaller number.
  *
  * Return: Always (Success)
  */
int main(void)
{
	int f, g;

	for (f = '0'; f <= '9'; f++)
	{
		for (g = '0'; g <= '9'; g++)
		{
			if (f < g)
			{
				putchar(f);
				putchar(g);

				if (f != '8' || (f == '8' && g != '9'))
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
