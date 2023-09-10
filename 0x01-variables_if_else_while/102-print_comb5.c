#include <stdio.h>

/**
  * main - Prints the numbers from 00 to 99
  *
  * Return: Always (Success)
  */
int main(void)
{
        int j, i;

        j = i = '0';

        for (j = 0; j <= 98; j++)
        {
                for (i = 0; i <= 99; i++)
                {
			if (j < i && j != i)
			{
                        	putchar((j / 10) + '0');
                        	putchar((j % 10) + '0');
                        	putchar(' ');
                        	putchar((i / 10) + '0');
                        	putchar((i % 10) + '0');

                        	if ((j != 98) && i != 99))
                        	{	
					break;
				}
				putchar(',');
				putchar(' ');
			}
                }
        }

        putchar('\n');

        return (0);
}
