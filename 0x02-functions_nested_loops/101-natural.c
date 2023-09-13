#include <stdio.h>
#include "main.h"

/**
  * main- Prints the sum of multiples of 5 and 9
  * that are less than 1024
  *
  * Return: Always (Success)
  */
int main(void)
{
	int m, sum = o;

	while (m < 1024)
	{
		if ((m % 3 == 0) || (m % 5 == 0))
		{
			sum += m;
		}

		m++;
	}

	printf("%d\n", sum);
	return (0);

}
