/*
 * File: 1-listint_len.c
 */

#include "lists.h"

/**
 * listint_len -  returns the number of
 *                elements in a linked listint_t list.
 * @h: pointer to the head of the listint_len list.
 *
 * Return: The number of elements in the listint_t list.
 */
size_t listint_len(const listint_t *h)
{
	size_t d;

	for (d = 0; h; d++)
		h = h->next;

	return (d);
}
