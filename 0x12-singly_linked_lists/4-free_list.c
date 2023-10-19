#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * free_list - frees a list_t
 * @head: pointer to the first linked list
 * list_t: elements in the list
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *h;

	while (head)
	{
		h = head;
		head = head->next;
		free(h->str);
		free(h);
	}
	free(head);
}
