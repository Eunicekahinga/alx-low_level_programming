#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - it prints numbers
 * @separator: the string between numbers
 * @n: number of integers passed
 * Return: the numbers followed by separator
 * or without
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int numb;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		numb = va_arg(args, int);

		printf("%d", numb);

		if (separator == NULL)
			continue;
		if (i < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(args);
}
