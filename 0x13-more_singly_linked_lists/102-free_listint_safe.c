#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - it frees all the elements
 * @h: pointer to the head node
 * Return: freed size
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *currentNode, *newNode;
	size_t nodeCount = 0;


	if (*h == NULL || h == NULL)
	{
		return (0);
	}

	currentNode = *h;

	while (currentNode != NULL)
	{
		newNode = currentNode;
		currentNode = currentNode->next;

		free(newNode);
		nodeCount++;
	}
	*h = NULL;

	return (nodeCount);
}
