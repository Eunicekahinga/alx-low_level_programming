#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds a node at the beginning
 * @head: the pointer to the head node
 * @n: the data to be traversed
 * Return: address of new element else  NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = (listint_t *)malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
