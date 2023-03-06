/*
 * File: 0-memset.c
 */

#include "main.h"

/**
 * *_memset - fills memory with a constant byte.
 * @s: pointer to memory area to fill
 * @n: the number of bytes to fill
 * @b: constant byte
 *
 * Return: a pointer to the memory @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int r;

	for (r = 0; r < n; r++)
	{
		s[r] = b;
	}

	return (s);
}
