/*
 * File: 0-print_listint.c
 */

#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: pointer to head of the head of lists_t list.
 *
 * Return: number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t d;

	for (d = 0; h; d++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (d);
}
