#include <stdio.h>
#include "main.h"

/**
 * print_buffer - prints a buffer
 * @b: buffer to be printed
 * @size: number of bytes
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int i, j;

	if (size <= 0)
	{
		printf("\n");
		return;
	}

	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);

	for (j = i; j < i + 10; j++)
	{
		if (j < size)
			printf("%02x", b[j]);
		else
			printf(" ");

		if (j % 2 == 1)
			printf(" ");
	}
	printf(" ");

	for (j = i; j < i + 10; j++)
	{
		if (j < size)
		{
			if (b[j] >= 32 && b[j] <= 126)
				printf("%c", b[j]);
			else
				printf(".");
		}
		else
		{
			printf(" ");
		}
	}
	printf("\n");
	}
}
