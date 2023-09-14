#include "main.h"

/**
 * _isdigit - it checks whether a character is
 * a digit (0 through 9)
 * @c : is the character to be checked
 *
 * Return: 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}

	return (0);

}
