#include "main.h"

/**
 * _strstr - finds first occurence of the substring
 * needle in the string haystack
 * @haystack: the string to search in
 * @needle: the substring to be searched for
 *
 * Return: pointer to the beginning of the substring
 * or NULL if not found
 *
 */
char *_strstr(char *haystack, char *needle)
{
	char *a, *b;

	while (*haystack)
	{
		a = haystack;
		b = needle;

		while (*b && *a == *b)
		{
			a++;
			b++;
		}

		if (*b == '\0')
		{
			return (haystack);
		}

		haystack++;
	}

	return (NULL);
}
