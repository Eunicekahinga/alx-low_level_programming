#include "hash_tables.h"

/**
 * hash_table_set - adds element to the hash table
 * @ht: the hash table to be added or updated
 * @key: the key
 * @value: the value of the key
 * Return: 1 on success and on failure
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *current, *n_Node;

	if (!ht || !key || !*key || !value)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	current = ht->array[index];
	while (current && strcmp(current->key, key) != 0)
		current = current->next;
	if (current)
	{
		free(current->value);
		current->value = strdup(value);
		return (1);
	}
	n_Node = malloc(sizeof(hash_node_t));
	if (!n_Node)
		return (0);
	n_Node->key = strdup(key);
	n_Node->value = strdup(value);
	n_Node->next = ht->array[index];
	ht->array[index] = n_Node;
	return (1);
}
