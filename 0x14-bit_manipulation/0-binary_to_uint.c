#include "main.h"
#include <stddef.h>

/**
 * binary_to_unit- function to convert binary numbers
 * to an unsigned int
 *@b: pointer to strings 0 and 1 chars
 *Return: Converted number else 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int resultingUnit = 0;

	int j;

	if (b == NULL || (*b != '1' && *b != '0'))
		return (0);
	for (j = 0; b[j] != '\0'; j++)
	{
		if (b[j] != '0' && b[j] != '1')
			return (0);
		resultingUnit = resultingUnit * 2 + (b[j] - '0');
	}

	return (resultingUnit);
}
