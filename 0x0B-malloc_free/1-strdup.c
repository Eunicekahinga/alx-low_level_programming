#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to memory
 * contains copy of the string given
 * @str: the string given
 * Return: Null if NULL else duplicate of string
 */
char *_strdup(char *str)
{
	char *duplicate;
	int i, length = 0;

	if (str == NULL)
		return (NULL);

	while (str[length] != '\0')
		length++;

	duplicate = (char *)malloc((length + 1) * sizeof(char));

	if (duplicate == NULL)
		return (NULL);

	for (i = 0; i <= length; i++)
		duplicate[i] = str[i];

	return (duplicate);
}
