#include <stdio.h>
#define LARGEST 10000000000
/**
 * main - Prints the first 98 fibonacci numbers
 * Description: Find and print the first 98 fibonacci
 * numbers starting with 1 and 2.
 *
 * Return: No return
 */
int main(void)
{
	unsigned long int fr1 = 0, bk1 = 1, fr2 = 0, bk2 = 2;
	unsigned long int holda, holdb, holdc;
	int count;

	printf("%lu, %lu, ", bk1, bk2);
	for (count = 2; count < 98; count++)
	{
		if (bk1 + bk2 > LARGEST || fr2 > 0 || fr1 > 0)
		{
			holda = (bk1 + bk2) / LARGEST;
			holdb = (bk1 + bk2) % LARGEST;
			holdc = fr1 + fr2 + holda;
			fr1 = fr2, fr2 = holdc;
			bk1 = bk2, bk2 = holdb;
			printf("%lu%010lu", fr2, bk2);
		}
		else
		{
			holdb = bk1 + bk2;
			bk1 = bk2, bk2 = holdb;
			printf("%lu", bk2);
		}
		if (count != 97)
			printf(", ");
	}
	printf("\n");
	return (0);
}
