#include "main.h"
/**
 * wildcmp_recursive - checks if strings are identical
 * @s1: the first string
 * @s2: the second string
 * Return: true or false
 */

int wildcmp_recursive(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		if (*s2 == '\0'	|| (*s2 == '*' && wildcmp_recursive(s1, s2 + 1)))
			return (1);
		else
			return (0);
	}

	if (*s2 == '*')
	{
		return (wildcmp_recursive(s1 + 1, s2) || wildcmp_recursive(s1, s2 + 1));
	}
	if (*s1 == *s2)
	{
		return (wildcmp_recursive(s1 + 1, s2 +1));;
	}

	return (0);
}

/**
 * wildcmp - checks if strings are identical
 * @s1: the first string
 * @s2: the second string
 * Return: true or false
 */
int wildcmp(char *s1, char *s2)
{
	return (wildcmp_recursive(s1, s2));
}
