#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - it frees a listint_t list
 * @head: the pointer to the head node pointer
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *added;

	while (head != NULL)
	{
		added = head;
		head = head->next;

		free(added);
	}
}
