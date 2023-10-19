#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds elements in a linked
 * list and return their new address
 * @head: pointer to the first linked list
 * @str: the first element
 * list_t: elements in the list
 * Return: the count of the element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *nextNode;

	if (str == NULL)
		return (NULL);
	nextNode = malloc(sizeof(list_t));

	if (nextNode == NULL)
		return (NULL);

	nextNode->str = strdup(str);

	if (nextNode->str == NULL)
	{
		free(nextNode);
		return (NULL);
	}

	nextNode->str = strdup(str);
	nextNode->len = _stringLength(str);
	nextNode->next = *head;
	*head = nextNode;

	return (nextNode);
}

/**
 * _stringLength - Counts the length of a string
 * @str: the string length
 * Return: string length
 */
int _stringLength(const char *st)
{
	int lengthS = 0;

	while (*st)
	{
		st++;
		lengthS++;
	}
	return (lengthS);
}
