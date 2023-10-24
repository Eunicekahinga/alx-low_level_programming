#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees space and sets head to NULL
 * @head: pointer to the head pointer
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *added;

	if (*head == NULL)
	{
		return;
	}

	while (*head != NULL)
	{
		added = *head;
		*head = (*head)->next;

		free(added);
	}
}
