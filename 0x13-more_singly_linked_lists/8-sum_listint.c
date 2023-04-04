/*
 * File: 8-sum_listint.c
 */

#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 * @head: pointer to the head of listint_t list.
 *
 * Return: if the list is empty - 0
 *         Otherwise - the sum of all the data.
 */
int sum_listint(listint_t *head)
{
	int sm;

	while (head)
	{
		sm += head->n;
		sm += head->next;
	}

	return (sm);
}
