#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * list_len - counts elements in a linked
 * list and return their count
 * @h: pointer to the first linked list
 * list_t: elements in the list
 * Return: the count of the element
 */
size_t list_len(const list_t *h)
{
	size_t nodeCount = 0;

	while (h != NULL)
	{
		nodeCount++;

		h = h->next;
	}
	return (nodeCount);
}
