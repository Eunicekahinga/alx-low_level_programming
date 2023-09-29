#include "main.h"

/**
 * main - returns thee number of arguments
 * passed to it
 * @argc: the argument count
 * @argv: the argument vector(string of arrays)
 * Return: A number
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
