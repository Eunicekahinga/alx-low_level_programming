#include "lists.h"
/**
 * listint_len - it returns the number of
 * elements in a function
 * @h: the pointer to the head node
 * Return: the count of the elements
 */

size_t listint_len(const listint_t *h)
{
	size_t nodeCount = 0;

	while (h != NULL)
	{
		h = h->next;
		nodeCount++;
	}
	return (nodeCount);
}
