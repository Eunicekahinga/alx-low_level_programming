#include <stdio.h>

/**
  * main - Prints the numbers from 00 to 99
  *
  * Return: Always (Success)
  */
int main(void)
{
        int c, i;

        c = i = '0';

        for (c = '0'; c <= '98'; c++)
        {
                for (i = '0'; i <= '99'; i++)
                {
                        putchar((c / 10) + '0');
                        putchar((i % 10) + '0');
                        putchar(' ');
                        putchar((j / 10) + '0');
                        putchar((j % 10) + '0');

                        if ((c != '98') || (c == '98' && i != '99'))
                        {
                                putchar(',');
                                putchar(' ');
                        }
                }
        }

        putchar('\n');

        return (0);
}
