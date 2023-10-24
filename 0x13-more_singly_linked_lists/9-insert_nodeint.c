#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - the function inserts a node
 * at the given index
 * @head: the pointer to the head node
 * @n: the data
 * @idx: the index of the list where the
 * node will be added
 * Return: address of the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode, *currentNode;

	currentNode = *head;

	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);
	newNode->n = n;

	if (idx == 0)
	{

		newNode->next = *head;
		*head = newNode;

		return (newNode);
	}
	while (idx > 1)
	{
		if (currentNode == NULL)
		{
			free(newNode);
			return (NULL);
		}
		currentNode = currentNode->next;
		idx--;
	}

	newNode->next = currentNode->next;
	currentNode->next = newNode;

	return (newNode);
}
