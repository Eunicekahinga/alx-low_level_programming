#include "hash_tables.h"

/**
 * hash_djb2 - a function that implements djb2 algorithm
 * @str: The string of the hash table
 *
 * Return: Value to the hashtable
 *
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int value = 5381;
	int h_table;

	while ((h_table = *str++))
		value = ((value << 5) + value) + h_table;
	return (value);
}
