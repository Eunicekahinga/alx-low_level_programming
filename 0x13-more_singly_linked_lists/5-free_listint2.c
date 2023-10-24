#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees space and sets head to NULL
 * @head: pointer to the head pointer
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *currentNode, *newNode;


	if (*head == NULL || head == NULL)
	{
		return;
	}

	currentNode = *head;

	while (currentNode != NULL)
	{
		newNode = currentNode;
		currentNode = currentNode->next;

		free(newNode);
	}
	*head = NULL;
}
