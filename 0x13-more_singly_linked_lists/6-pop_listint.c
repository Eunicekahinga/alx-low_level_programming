#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - it deletes the head node
 * @head: the  node to bee deleted
 * Return: head node data else 0
 */

int pop_listint(listint_t **head)
{
	int daTa;
	listint_t *oldNode;

	if (*head == NULL)
		return (0);

	daTa = (*head)->n;

	oldNode = *head;

	*head = (*head)->next;

	free(oldNode);

	return (daTa);
}
