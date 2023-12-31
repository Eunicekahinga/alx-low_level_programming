#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: the string
 * @c: the character to be located
 *
 * Return: Pointer to c or null if character
 * not found
 *
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			break;
		}
		s++;
	}
	if (*s == '\0' && c != '\0')
	{
		return (NULL);
	}
	else
	{
		return (s);
	}
}
