#include <stdio.h>

/**
  * main - Prints the first 98 fibonacci numbers
  *
  * Return: No return
  */
int main(void)
{
	int i = 0;
	unsigned long j = 1, k = 2;

	while (i < 98)
	{
		if (i == 0)
			printf("%lu", j);
		else if (i == 1)
			printf(", %lu", k);
		else
		{
			k += j;
			j = k - j;
			printf(", %lu", k);
		}

		i++;
	}

	printf("\n");
	return (0);
}
