#include "lists.h"
#include <stdlib.h>

/**
 * reverse_listint - it reverses a listint_t
 * @head: pointer to the head node
 * Return: pointer to first node
 * of reversed string
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *previousNode, *currentNode, *nextNode;

	previousNode = NULL;

	currentNode = *head;

	while (currentNode != NULL)
	{
		nextNode = currentNode->next;

		currentNode->next = previousNode;

		previousNode = currentNode;
		currentNode = nextNode;
	}
	*head = previousNode;

	return (*head);
}
