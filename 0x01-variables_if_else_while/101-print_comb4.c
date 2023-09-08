#include <stdio.h>

/**
  * main - Printing combination of three numbers with the smaller ones preceding
  *
  * Return: Always (Success)
  */
int main(void)
{
	int f, g, k;

	for (f = '0'; f <= '9'; f++)
	{
		for (g = '0'; g <= '9'; g++)
		{
			for (k = '0'; k <= '9'; k++)
			{
				if (f < g && g < k)
				{
					putchar(f);
					putchar(g);
					putchar(k);

					if (f != '7')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
