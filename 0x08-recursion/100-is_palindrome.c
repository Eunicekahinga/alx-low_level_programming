#include "main.h"
#include <string.h>

/**
 * is_palindrome_recursive - checks if a string is empty
 * @s: the string
 * @a: the start of the string
 * @b: the end of the string
 * Return: 1 if with string else 0
 *
 */

int is_palindrome_recursive(char *s, int a, int b)
{
	if (a >= b)
	{
		return (1);
	}

	if (s[a] != s[b])
	{
		return (0);
	}

	return (is_palindrome_recursive(s, a + 1, b - 1));
}

/**
 * is_palindrome - checks if a stringis empty
 * @s: the string
 * Return: 1 if with characters else 0
 */

int is_palindrome(char *s)
{
	int length = strlen(s);

	return (is_palindrome_recursive(s, 0, length - 1) ? 1 : 0);
}
