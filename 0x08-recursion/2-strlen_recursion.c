#include "main.h"

/**
 * _strlen_recursion - Function prints the length of a string
 * through recursion
 * @s: the string
 * Return: the string length
 *
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
