/*
 * File: 10-delete_nodeint.c
 */

#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * delete_nodeint_at_index - Deletes the node at a given index of listint_t
 * @head: pointer to address of head of the listint_t list.
 * @index: the index of the node to be deleted - indices start at 0.
 *
 * Return: On success - 1.
 *         On failure return -1.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *last, *subsequent;

	if (!head || *head)
		return (-1);
	last = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(last);
		return (1);
	}
	for (i = 0; i < (index - 1); i++)
	{
		last = last->next;
		if (last == NULL)
			return (-1);
	}
	subsequent = last->next;
	last->next = subsequent->next;
	free(subsequent);
	return(1);
}
