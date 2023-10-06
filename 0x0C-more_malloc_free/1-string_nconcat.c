#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * @n: the integer
 * Return: pointer to new memory else NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *resultingString;
	unsigned int length1 = 0, length2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	length1 = strlen(s1);
	length2 = strlen(s2);

	if (n >= length2)
		n = length2;

	resultingString = malloc(length1 + n + 1);

	if (resultingString == NULL)
		return (NULL);

	strcpy(resultingString, s1);
	strncat(resultingString, s2, n);

	return (resultingString);
}
