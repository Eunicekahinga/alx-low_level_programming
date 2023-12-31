#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - it prints the name as in the
 * given function
 * @name: the name to be printed
 * @f: the pointer to the function
 * Return: the name
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
