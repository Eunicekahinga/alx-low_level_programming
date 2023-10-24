#include "lists.h"

/**
 * print_listint - the function prints all elements
 * @h: the pointer to the head node
 * Return: the printed elements and the count of the elements
 */

size_t print_listint(const listint_t *h)
{
	size_t nodeCount = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodeCount++;
	}
	return (nodeCount);
}
