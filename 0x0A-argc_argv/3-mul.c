#include "main.h"
#include <stdlib.h>

/**
 * main - prints all arguments received
 * @argc: the string count
 * @argv: string array to be printed
 * Return: arguments printed
 */

int main(int argc, char *argv[])
{
	int num1 = 0, num2 = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}


	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	printf("%d\n", num1 * num2);
	return (0);
}
