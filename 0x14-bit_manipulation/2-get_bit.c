#include "main.h"
/**
 * get_bit - the function returns the value of
 * a bit at a given index
 * @index: the given index
 *@n: number to extract the bit  from
 * Return: value of bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	return ((n >> index) & 1);
}
