#include <stdio.h>
#include "main.h"

/**
  * _isalpha - Checks for lower and upper alphabetic character
  * @c: The character to be checked
  *
  * Return: 1 for alphabetic character or 0 if not alphabetic characters
  */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}

	return (0);
}
