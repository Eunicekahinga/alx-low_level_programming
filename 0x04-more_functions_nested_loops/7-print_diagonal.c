#include "main.h"

/**
 *print_diagonal - Prints a line that is diagonal
 *using backslashes
 *@n: the number of times the '\' is printed
 *Return: a diagonal line
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
