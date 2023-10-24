#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - the function prints the nth node
 * @head: pointer to the head node
 * @index: shows the nth  node to be printed
 * Return: nth node else NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int indexCounter = 0;

	while (head != NULL)
	{
		if (indexCounter == index)
			return (head);

		head = head->next;
		indexCounter++;
	}

	return (NULL);
}
