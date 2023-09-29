#include "main.h"
#include <stdio.h>

/**
 * _strcmp - it compares two strings
 * @s1: the first string to be compared
 * @s2: the second string to be compared to
 * Return: the difference between the values
 */
int _strcmp(char *s1, char *s2)
{
	for (; *s1 && (*s1 == *s2); s1++, s2++)
	{

	}
	return (*s1 - *s2);
}
