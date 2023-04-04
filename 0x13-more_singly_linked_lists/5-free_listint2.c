/*
 * File: 5-free_listint2.c
 */

#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a listint_t list.
 * @head: pointer to address of head of listint_t to be freed.
 *
 * Description: Sets the head to NULL.
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp, *last;

	if (head == NULL)
		return;

	last = *head;
	while (last != NULL)
	{
		tmp = last;
		last = last->next;
		free(tmp);
	}
	*head = NULL;
}
