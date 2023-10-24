#include "lists.h"
#include <stdlib.h>

/**
 * print_listint_safe - it prints all the elements
 * @head: pointer to the head node
 * Return: number of nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nodeCount = 0;
	const listint_t *currentNode, *previousNode;

	currentNode = head;
	previousNode = head;

	while (currentNode != NULL && previousNode != NULL && previousNode->next != NULL)
	{
		printf("[%p] %d\n", (void *)currentNode, currentNode->n);

		nodeCount++;

		currentNode = currentNode->next;
		previousNode = previousNode->next;

		if (previousNode != NULL)
			previousNode = previousNode->next;

		if (currentNode == previousNode)
		{
			printf("-> [%p] %d\n", (void *)currentNode, currentNode->n);
			exit(98);
		}
	}
	return (nodeCount);
}
