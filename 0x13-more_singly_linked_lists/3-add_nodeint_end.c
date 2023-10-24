#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds a node at the end of the lists
 * @head: the pointer to the head node
 * @n: the data to traverse
 * Return: the address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode, *added;

	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
	}
	else
	{
		added = *head;

		while (added->next != NULL)
		{
			added = added->next;
		}
		added->next = newNode;
	}
	return (newNode);
}
