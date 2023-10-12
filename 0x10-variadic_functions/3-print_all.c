#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_all - print all parameters in any format
 * @format: all arguments passed
 * Return: the parameters
 */
void print_all(const char *const format, ...)
{
	int i = 0;
	char *anyVar;
	va_list args;

	va_start(args, format);
	while (format == NULL)
	{
		printf("\n");
		return;
	}
	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", (char) va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", (float) va_arg(args, double));
				break;
			case 's':
				anyVar = va_arg(args, char*);
				if (anyVar != NULL)
				{
					printf("%s", anyVar);
					break;
				}
				printf("(nil)");
				break;
		}
		if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f' || format[i]
					== 's') && format[(i + 1)] != '\0')
			printf(", ");
		i++;
	}
	va_end(args);
	printf("\n");
}
