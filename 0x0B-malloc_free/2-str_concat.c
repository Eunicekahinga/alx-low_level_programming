#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * With return pointer to the newly allocated
 * memory with the new string
 * @s1: the first string
 * @s2: the second string
 * Return: new combined string or null on failure
 */

char *str_concat(char *s1, char *s2)
{
	int length1 = 0, length2 = 0, i, j;
	char *newString;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[length1] != '\0')
		length1++;

	while (s2[length2] != '\0')
		length2++;

	newString = (char *)malloc((length1 + length2 + 1) * sizeof(char));

	if (newString == NULL)
		return (NULL);

	for (i = 0; i < length1; i++)
		newString[i] = s1[i];

	for (j = 0; j < length2; j++)
		newString[i + j] = s2[j];

	newString[i + j] = '\0';

	return (newString);
}
