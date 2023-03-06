/*
 * File:  1-memcpy.c
 */

#include "main.h"

/**
 * *_memcpy - copies memory area.
 * @dest: where to copy the memory to
 * @n: the number of bytes
 * @src: the memory area to copy from
 *
 * Return: a pointer to @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int f;

	for (f = 0; f < n; f++)
		dest[f] = src[f];

	return (dest);
}
