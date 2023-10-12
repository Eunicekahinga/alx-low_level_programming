#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings - it prints string
 * @separator: the separators of the strings
 * @n the number of strings passed
 * Return: the strings else nil if NULL
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *stringVar;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		stringVar = va_arg(args, char*);
		if (stringVar == NULL)
			printf("nil");
		else
			printf("%s", stringVar);
		if (separator == NULL)
			continue;
		if (i < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(args);
}
