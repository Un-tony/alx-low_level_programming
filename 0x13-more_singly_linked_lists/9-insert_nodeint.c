/*
 * File: 9-insert_nodeint.c
 */

#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: a pointer to the address of the head of the listint_t list.
 * @index: the index of the listint_t where the new node should be added
 *       - indices start at 0.
 * @n: the integer for the new node to contain.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
	listint_t *last, *new;

	last = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	if (index == 0)
	{
		new->next = last;
		*head = new;
		return (*head);
	}
	while (index > 1)
	{
		last = last->next;
		index--;
		if (!last)
		{
			free(new);
			return (NULL);
		}
	}
	new->next = last->next;
	last->next = new;
	return (new);
}
