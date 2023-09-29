#include "main.h"

/**
 *_isupper - checks whether the character is upper case
 *@c: the character to be checked
 *
 *Return: 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}

	return (0);
}
