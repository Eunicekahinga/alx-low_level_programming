#include"main.h"

/**
 * main - prints all arguments received
 * @argc: the string count
 * @argv: string array to be printed
 * Return: arguments printed
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
