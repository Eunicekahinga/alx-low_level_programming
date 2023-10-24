#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees space and sets head to NULL
 * @head: pointer to the head pointer
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *added, *newNode;

	if (*head == NULL)
	{
		return;
	}
	added = *head;
	while (added != NULL)
	{
		newNode = added;
		added = added->next;

		free(newNode);
	}
	*head = NULL;
}
