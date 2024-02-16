#include "hash_tables.h"

/**
 * key_index - gives index of a key
 * @key: key to hashtable
 * @size: size of array of hashtable
 * use the hash_djb2 function
 *
 * Return: index of key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
