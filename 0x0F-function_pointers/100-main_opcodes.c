#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - it prints the opcodes
 * @main_start: main function pointer
 * @numBytes: number of bytes
 * Return: Success
 */
void print_opcodes(unsigned char *main_start, int numBytes)
{
	int i;

	if (numBytes > 0)
	{
		for (i = 0; i < numBytes; i++)
		{
			printf("%02hhx", main_start[i]);
			if (i < numBytes - 1)
				printf(" ");
			else
				printf("\n");
		}
	}
}

/**
 * main - function to print opcode
 * @argc: the argument count
 * @argv: array
 * Return: success else error
 */
int main(int argc, char *argv[])
{
	int numBytes;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	numBytes = atoi(argv[1]);

	if (numBytes <= 0)
	{
		printf("Error\n");
		return (2);
	}

	print_opcodes((unsigned char *)main, numBytes);

	return (0);
}
