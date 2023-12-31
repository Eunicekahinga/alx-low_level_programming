#include "lists.h"

/**
 * print_dlistint - check the number of nodes
 * @h: the head node
 *
 * Return: the number of nodes.
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
