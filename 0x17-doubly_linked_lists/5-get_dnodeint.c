#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t list.
 * @head: Pointer to the head
 * @index: Index of the node(starting from 0).
 * Return: Pointer to the nth node or NULL.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL)
	{
		if (count == index)
			return (head);

		head = head->next;
		count++;
	}

	return (NULL);
}
