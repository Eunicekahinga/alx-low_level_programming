#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - it deletes node at index index
 * @head: pointer to the head node
 * @index: the index where the node is to be deleted
 * Return: 1 if success else -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *currentNode, *newNode;
	unsigned int data = 0;

	currentNode = *head;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		newNode = *head;
		*head = (*head)->next;
		free(newNode);
		return (1);
	}

	while (currentNode != NULL && data < index - 1)
	{
		currentNode = currentNode->next;
		data++;
	}
	if (currentNode == NULL || currentNode->next == NULL)
		return (-1);

	newNode = currentNode->next;
	currentNode->next = newNode->next;
	free(newNode);
	return (1);
}
