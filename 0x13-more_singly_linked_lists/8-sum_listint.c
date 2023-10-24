#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - it sums all of the data
 * @head: the pointer to the head node
 * Return: the sum, else 0
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
