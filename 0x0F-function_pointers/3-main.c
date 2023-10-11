#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - has main function
 * @argc: the argument count
 * @argv: the argument value
 * Return: success
 */
int main(int argc, char *argv[])
{
	int numa, numb, result;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	numa = atoi(argv[1]);
	numb = atoi(argv[3]);
	func = get_op_func(argv[2]);

	if (func == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	result = func(numa, numb);

	printf("%d\n", result);

	return (0);
}
