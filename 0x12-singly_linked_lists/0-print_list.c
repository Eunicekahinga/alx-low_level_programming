#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_list - prints elements in a linked
 * list and return their count
 * @h: pointer to the first linked list
 * list_t: elements in the list
 * Return: the count of the element
 */
size_t print_list(const list_t *h)
{
	size_t nodeCount = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		nodeCount++;
		h = h->next;
	}
	return (nodeCount);
}

